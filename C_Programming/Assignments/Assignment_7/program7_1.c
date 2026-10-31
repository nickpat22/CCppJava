// Question 1: Write a program which accepts a number from the user
// and prints that number of $ and * on the screen.

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 0; iCnt <iNo; iCnt++)
    {printf("$\t*\t");}
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}