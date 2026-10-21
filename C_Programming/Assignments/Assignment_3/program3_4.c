/*4. Accept one character from user and convert case of that character.

Input : a       Output : A

Input : D       Output : d*/
#include<stdio.h>
void DisplayConvert ( char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue+32);
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue-32);
    }
    else
    {
        printf("Only Alphabets are allowed to type !!");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}