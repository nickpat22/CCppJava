// 5. Write a program which accept number from user and return difference between
// summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,
        iCountEven = 0,
        iCountOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCountEven = iCountEven + iDigit;
        }
        else
        {
            iCountOdd = iCountOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    printf("%d\n",iCountEven);
    printf("%d\n",iCountOdd);

    return iCountEven - iCountOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}