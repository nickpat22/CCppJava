// Q2

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
    {
        
        printf("%c\t",ch+32);
            
        
    }
    if((ch >= 'a' && ch <= 'z'))
    {

        printf("%c\t",ch-32);

    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}