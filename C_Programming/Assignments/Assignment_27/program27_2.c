// Write a program which accepts string from user
// and counts the number of small characters.

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;  

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%19[^\n]", arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}