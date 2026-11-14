#include<stdio.h>
#include<stdlib.h>



int main()
{
    int iValue = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);
    
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iValue; iCnt++)
    {
        printf("%d\n",iCnt);
    }

    return EXIT_SUCCESS;
}