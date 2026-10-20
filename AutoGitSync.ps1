
$ErrorActionPreference = "Continue"

$RepoPath = "C:\Users\Lenovo\Desktop\CCppJava"
$IntervalSeconds = 5
$QuietSeconds = 3

Set-Location $RepoPath

$root = git rev-parse --show-toplevel
if ($LASTEXITCODE -ne 0 -or
    [System.IO.Path]::GetFullPath($root.Trim()) -ne
    [System.IO.Path]::GetFullPath($RepoPath)) {
    Write-Host "ERROR: Incorrect Git repository root." -ForegroundColor Red
    exit 1
}

$Branch = (git branch --show-current).Trim()
if ($LASTEXITCODE -ne 0 -or !$Branch) {
    Write-Host "ERROR: Could not identify the current branch." -ForegroundColor Red
    exit 1
}

$Remote = git remote get-url origin 2>$null
if ($LASTEXITCODE -ne 0 -or !$Remote) {
    Write-Host "ERROR: Git remote 'origin' is not configured." -ForegroundColor Red
    exit 1
}

Write-Host "Auto-sync started." -ForegroundColor Green
Write-Host "Folder: $RepoPath"
Write-Host "Branch: $Branch"
Write-Host "Remote: $Remote"
Write-Host "Press Ctrl+C to stop."

$PendingPush = $false
$LastPushAttempt = [DateTime]::MinValue

while ($true) {
    try {
        $status = @(git status --porcelain --untracked-files=all)

        if ($LASTEXITCODE -ne 0) {
            Write-Host "Could not read Git status." -ForegroundColor Red
        }
        elseif ($status.Count -gt 0) {
            Start-Sleep -Seconds $QuietSeconds

            $status = @(git status --porcelain --untracked-files=all)

            if ($LASTEXITCODE -eq 0 -and $status.Count -gt 0) {
                git add -A

                if ($LASTEXITCODE -eq 0) {
                    git diff --cached --quiet
                    $diffResult = $LASTEXITCODE

                    if ($diffResult -eq 1) {
                        $message = "Auto-sync: " +
                            (Get-Date -Format "yyyy-MM-dd HH:mm:ss")

                        git commit -m $message

                        if ($LASTEXITCODE -eq 0) {
                            $PendingPush = $true
                        }
                        else {
                            Write-Host "Commit failed; check the error." `
                                -ForegroundColor Red
                        }
                    }
                    elseif ($diffResult -gt 1) {
                        Write-Host "Could not inspect staged changes." `
                            -ForegroundColor Red
                    }
                }
            }
        }

        if ($PendingPush -and
            ([DateTime]::Now - $LastPushAttempt).TotalSeconds -ge 15) {

            $LastPushAttempt = [DateTime]::Now
            git push -u origin $Branch

            if ($LASTEXITCODE -eq 0) {
                $PendingPush = $false
                Write-Host "GitHub sync successful." -ForegroundColor Green
            }
            else {
                Write-Host "Push failed; will retry. Check the error above." `
                    -ForegroundColor Red
            }
        }
    }
    catch {
        Write-Host "Sync error: $_" -ForegroundColor Red
    }

    Start-Sleep -Seconds $IntervalSeconds
}
