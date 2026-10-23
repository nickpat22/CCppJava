#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////
//
// Function Name : Addition
// Input         : Integer , Integer
// Output        : Integer
// Description   : Performs Addition
// Date          : 04/10/2026
//Author         : Nikunj Mahendra Patidar
//
/////////////////////////////////////////////

int Addition(
                int iNo1,   //First Input
                int iNo2    //Second Input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;     // Busness Logic

    return iAns;
}
/////////////////////////////////////////////
// 
// Entry Point of the application
//
/////////////////////////////////////////////


int main()
{

    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);
    printf("Addition is : %d\n",iResult);


    return EXIT_SUCCESS;        // # define EXIT_SUCCESS 0
}
/////////////////////////////////////////////
// Step 5: Test the program
// 
//        Tested test cases
/*-------------------------------------------------
        Input1         Input2      Output
  -------------------------------------------------
        11              0           11
        0               11          11
        20              -9          11
        -9              20          11
        -20             -11         -31
 ------------------------------------------------
*/
/////////////////////////////////////////////
