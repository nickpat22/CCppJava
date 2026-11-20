#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{ 
    int iCnt = 0, iFact = 0;
    iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);

    printf("The Factorial of Numbers is : %d",iRet);

    return EXIT_SUCCESS;
}