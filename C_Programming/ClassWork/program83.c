#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if (iNo % 3 == 0)
    {
        printf("The no. is Divisble");
    }
    else
    {
        printf("The no. is not divisible");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}