/*3. Write a program which accept number from user and print even factors of that number.

Input : 36

Output : 2  6  12  18*/

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo ;i++)
    {
        if((iNo % 2 == 0) && _____)
        {

        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}