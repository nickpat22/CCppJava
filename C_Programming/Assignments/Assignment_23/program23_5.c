// 5. Accept string from user and count number of white spaces.

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}