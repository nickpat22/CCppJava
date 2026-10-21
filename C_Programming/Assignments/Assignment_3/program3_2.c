/* 2. Write a program which accept number from user and print even factors of that number.

Input : 24

Output : 1  2  4  6  8  12 */

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= ___ ;i++)
    {
        if(_______)
        {
            printf("%d",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}