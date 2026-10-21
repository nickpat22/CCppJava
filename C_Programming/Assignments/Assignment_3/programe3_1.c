// 1. Write a program which accept one number from user and print that number of even numbers on screen.

/* Input : 7

Output : 2  4  6  8  10  12  14 */

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    iCnt = 1;
    for(iCnt = 1; iNo >= iCnt; iCnt++)
    {
        int iMul = 0;
        iMul = 1;
        iMul = iMul * 2
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}