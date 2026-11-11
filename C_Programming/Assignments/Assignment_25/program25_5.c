// Accept division of student from user and display exam timing
// based on the division. Divisions A, B, C and D.
// A: 7 AM, B: 8.30 AM, C: 9.20 AM, D: 10.30 AM.
// Application should be case insensitive.

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM");        
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}