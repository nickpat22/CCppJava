$base = "C:\Users\Lenovo\Desktop\GitLB"
$repos = @(
    @{ Folder = "C_Programming"; Name = "c_programming" },
    @{ Folder = "Java_Programming"; Name = "java_programming" },
    @{ Folder = "Cpp_Programming"; Name = "cpp_programming" }
)

foreach ($item in $repos) {
    $path = Join-Path $base $item.Folder
    $repo = $item.Name

    if (!(Test-Path $path)) {
        Write-Host "Folder not found: $path" -ForegroundColor Red
        continue
    }

    Set-Location $path

    if (!(Test-Path ".git")) {
        git init
        if ($LASTEXITCODE -ne 0) { throw "git init failed: $repo" }
    }

    git add .
    if ($LASTEXITCODE -ne 0) { throw "git add failed: $repo" }

    if (git status --porcelain) {
        git commit -m "Initial commit"
        if ($LASTEXITCODE -ne 0) { throw "Commit failed: $repo" }
    }

    $username = gh api user --jq .login
    if ($LASTEXITCODE -ne 0) { throw "GitHub authentication failed" }

    $remote = git remote get-url origin 2>$null
    if ($remote) {
        Write-Host "Existing origin detected in $repo. Check it before proceeding." -ForegroundColor Yellow
        continue
    }

    gh repo create "$username/$repo" --public --source=. --remote=origin --push
    if ($LASTEXITCODE -ne 0) {
        Write-Host "Creation or push failed: $repo" -ForegroundColor Red
        break
    }

    Write-Host "Successfully uploaded $repo" -ForegroundColor Green
}

Set-Location $base
