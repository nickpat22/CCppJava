#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    if ((iValue % 2) == 0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }

    return EXIT_SUCCESS;
}