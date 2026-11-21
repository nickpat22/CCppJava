#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{ 
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)      
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        printf("It is Perfect Number");
    }
    else
    {
        printf("It is not a Perfect Number");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);
    
    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}


//Time complexity : O(N / 2)