// Write a program to check whether the given string contains a vowel or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string");
    scanf("%19[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}