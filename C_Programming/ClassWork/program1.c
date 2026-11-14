#include<stdio.h>
void Display(int iNo)
{
   int iCnt = 0;
   for (iCnt = 1; iCnt <= iNo; iCnt++)
{
   printf("Jay Ganesh...\tJay Ganesh...\n");
}
}
int main()
{
   int Value = 0;
   
   printf("Enter Number of times to print : ");
   scanf("%d",&Value);

   Display(Value);

   return 0;
}