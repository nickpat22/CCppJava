// 3. Write a program which accept number from user and display all its non factors.

#include<stdio.h>

void NonFact(int iNo)
{
    int iCount = 0;
    
    for(iCount = 1; iCount < iNo; iCount++)
    {
        if(iNo % iCount != 0)
        {
            printf("%d\t",iCount);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
