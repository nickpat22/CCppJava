/*
    Step 1: Understand the problem statement
    Step 2: Write the Algorithm
    Step 3: Decide the programming Language
    Step 4: Write the Program
    Step 5: Test the program
*/
///////////////////////////////////////////////
//Step 1: Understand the problem statement
//        User is Going to enter any two inters 
//        and we have to perform addition
///////////////////////////////////////////////
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

int Addition(int No1, int No2)
{   
    int ans =0;
    ans = No1 + No2;

    return ans;
};

int main()
{   
    int N1=0,N2=0;
    printf("Enter First Number : \n");
    scanf("%d",&N1);
    printf("Enter Second Number : \n");
    scanf("%d",&N2);
    int Add = 0;
    Add = Addition(N1,N2);
    printf("Addition is : %d",Add);


    return 0;
}