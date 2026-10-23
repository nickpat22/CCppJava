/*
    Step 1: Understand the problem statement
    Step 2: Write the Algorithm
    Step 3: Decide the programming Language
    Step 4: Write the Program
    Step 5: Test the program
*/
/////////////////////////////////////////////
//Step 1: Understand the problem statement
//        User is Going to enter any two inters 
//        and we have to perform addition
/////////////////////////////////////////////
//Step 2: Write the Algorithm
/*
    Start
        Accept first number as No 1
        Accept Second number as No 2
        Create the variable as Ans to store the result
        perform the addition and store into Ans
        Display the result from Ans 
    End
*/
/////////////////////////////////////////////
//Step 3: Decide the programming Language
//        We select C programming
/////////////////////////////////////////////
//Step 4: Write the Program
/////////////////////////////////////////////

#include<stdio.h>

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

int Addition(int iNo1, int iNo2)
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


    return 0;
}