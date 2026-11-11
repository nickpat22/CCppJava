#include <stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char ch;

    // Move end pointer to the null character
    while (*end != '\0')
    {
        end++;
    }

    // Move end to the last actual character
    end--;

    // Swap characters from both ends
    while (start < end)
    {
        ch = *start;
        *start = *end;
        *end = ch;

        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", arr);

    StrRevX(arr);

    printf("Reversed string: %s\n", arr);

    return 0;
}