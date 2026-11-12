// Write a program which accepts string from user
// and display it in reverse order.

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char ch = '\0';
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%19[^\n]", arr);

    Reverse(arr);

    return 0;
}