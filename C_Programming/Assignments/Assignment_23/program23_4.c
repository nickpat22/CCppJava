// 4. Write a program which accept string from user and convert it into
// lower case.

#include<stdio.h>

void DisplayDigit(char *str)
{   
    while (*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%19[^\n]",arr);

    DisplayDigit(arr);

    return 0;
}