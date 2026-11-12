// Write a program which accepts string from user
// and counts the number of small characters.

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter

    while(*str != '\0')
    {
        // Logic
    }

    return ______;
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