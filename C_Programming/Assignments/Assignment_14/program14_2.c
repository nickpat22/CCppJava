// 2. Write a program which accept number from user and display its factors in
// decreasing order.

#include<stdio.h>

void FactRev(int iNo)
{
    int iCount = 0;
    
    for(iCount = iNo - 1; iCount >= 1; iCount--)
    {
        if(iNo % iCount == 0)
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

    FactRev(iValue);

    return 0;
}