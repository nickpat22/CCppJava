#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }

}
int main()
{   
    
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}