// 5. Write a program which returns difference between Even factorial and odd factorial
// of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iMulEven = 0;
    int iMulOdd = 0;
    iMulEven = 1;
    iMulOdd = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iMulEven = iCnt * iMulEven;
        }
        else if(iCnt % 2 != 0)
        {
            iMulOdd = iCnt * iMulOdd;
        }
    }
    return iMulEven - iMulOdd;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}