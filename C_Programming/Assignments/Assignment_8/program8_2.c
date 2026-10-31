// 2. Accept single digit number from user and print it into word.

#include<stdio.h>
void Display(int iN)
    {

        if(iN == 0)
        {
            printf("Zero");
        }
        else if(iN == 1)
        {
            printf("One");
        }
        else if(iN == 2)
        {
            printf("Two");
        }
        else if(iN == 3)
        {
            printf("Three");
        }
        else if(iN == 4)
        {
            printf("Four");
        }
        else if(iN == 5)
        {
            printf("Five");
        }
        else if(iN == 6)
        {
            printf("Six");
        }
        else if(iN == 7)
        {
            printf("Seven");
        }
        else if(iN == 8)
        {
            printf("Eight");
        }
        else if(iN == 9)
        {
            printf("Nine");
        }
        else
        {
            printf("Invalid Number");
        }
    }
    
    


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}