// 3. Write a program which accept distance in kilometre and convert it into meter.
// (1 kilometre = 1000 Meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iKm = iNo * 1000;

    return iKm;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d",iRet);

    return 0;
} 