#include <stdio.h>

void Display(char ch)
{
    

    printf("Decimal : %d\n",ch);
    printf("octal : %o\n",ch);
    printf("Hexadecimal : %x\n",ch);


}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
