#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG; //TYPE DEF NAME SHOULD BE IN CAPS (MACRO NAME ALSO IN CAPS (NULL))

ULONG Factorial(int iNo)
{ 
    int iCnt = 0;
    ULONG iFact = 0;
    

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);

    printf("The Factorial of Numbers is : %lld",iRet); //error in op

    return EXIT_SUCCESS;
}