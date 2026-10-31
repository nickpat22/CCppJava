// 5. Write a program which accept number from user and display its table in reverse order.

#include<iostream>
using namespace std;

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 0; iCnt < iNo; iCnt ++)
    {
        cout<<("#\t");
    }
    for(int iCnt = 0; iCnt < iNo; iCnt ++)
    {
        cout<<("#\t");
    }
}

int main()
{
    int iValue = 0;

    cout<<("Enter number : ");
    cin >> iValue;

    TableRev(iValue);

    return 0;
}