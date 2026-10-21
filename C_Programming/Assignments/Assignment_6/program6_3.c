/*
3 – Calculate Shopping Discount
*/

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Purchase Amount");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}