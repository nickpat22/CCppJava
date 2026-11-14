/*
------------------------------------------------
                Operation &&
-------------------------------------------------
    Result1     Result2     Result3
-------------------------------------------------
    True        True        True
    True        False       False
    False       True        False       //Short ckt evalution ((progrem gets skip on 2nd cond.))
    False       False       False        //Short ckt evalution
-------------------------------------------------

*/


#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if ((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        printf("The no. is Divisble ");
    }
    else
    {
        printf("The no. is not divisible");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}