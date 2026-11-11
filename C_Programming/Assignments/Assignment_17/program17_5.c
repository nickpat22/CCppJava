// 5. Accept number of rows and number of columns from user and display below
// pattern.

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int k = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = k; j <= iCol; j++)
        {
            printf("%d\t",j);
        }
        k = k + 1;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}