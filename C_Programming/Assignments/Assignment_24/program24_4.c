// 4. Accept string and one character. Return index of last occurrence.

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int icount2 = 0;
        icount2 = -1;
    while (*str != '\0')
    {
        
        if(*str == ch)
        {
            icount2 = iCount;
        }
        iCount++;
        str++;
    }
    return icount2;
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d",iRet);

    return 0;
}