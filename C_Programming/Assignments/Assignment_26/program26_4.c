#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
   if(  (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') ||  
        (ch >= '0' && ch <= '9') )
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}
