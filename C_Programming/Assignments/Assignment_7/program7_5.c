#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iMul = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo*iCnt;
        printf("%d\t",iMul);
    }
}

int main()
{
    int iValue = 0;


    printf("Enter the Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;

}