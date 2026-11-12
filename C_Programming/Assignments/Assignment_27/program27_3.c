// Write a program which accepts string from user and returns
// difference between frequency of small characters and frequency
// of capital characters.

#include<stdio.h>

int Difference(char *str)
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

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}