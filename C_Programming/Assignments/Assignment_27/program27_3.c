// Write a program which accepts string from user and returns
// difference between frequency of small characters and frequency
// of capital characters.

#include<stdio.h>

int Difference(char *str)
{
    int iCntSnall = 0,
        iCntBig = 0;

    // Filter

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSnall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCntBig++;
        }

        str++;
    }

    return iCntSnall - iCntBig;
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