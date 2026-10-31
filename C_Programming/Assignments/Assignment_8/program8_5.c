// 5. Write a program which accept number from user and display its table in reverse order.

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 0;
    iTable = iNo;
    for(iCnt = 10; iCnt > 0; iCnt --)
    {
        int Ans = iTable * iCnt;
        printf("%d\t",Ans);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}