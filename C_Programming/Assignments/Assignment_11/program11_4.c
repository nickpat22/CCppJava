// 4. Write a program which accept range from user and return addition of all even
// numbers in between that range. (Range should contains positive numbers only)

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    for(iStart; iStart<= iEnd; iStart++)
    {   
        if (iStart % 2 == 0)
        {
        iSum = iSum + iStart;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    if((iValue1) < 0 || (iValue2 < 0))
    {
        return printf("Invalid range");
    }
    else if ((iValue1 > iValue2))
    {
        return printf("Invalid range");
    }

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}