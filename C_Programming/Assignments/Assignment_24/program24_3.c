// 3. Accept string and one character. Return index of first occurrence.

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        iCount++;
        str++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d",iRet);

    return 0;
}