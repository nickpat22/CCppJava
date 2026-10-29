#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2)
{    
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else{
        return iNo2;
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Seconf Number :\n");
    scanf("%d",&iValue2);
    iResult = Minimum(iValue1,iValue2); 

    printf("Minimum Number is : %d\n",iResult);
    return EXIT_SUCCESS;
}