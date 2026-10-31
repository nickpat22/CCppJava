// 3. Write a program which accept range from user and return addition of all numbers
// in between that range. (Range should contains positive numbers only)

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{


        int iSum = 0;
        for(iStart; iStart<= iEnd; iStart++)
        {
        iSum = iSum + iStart;
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

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is : %d",iRet);

    return 0;
}