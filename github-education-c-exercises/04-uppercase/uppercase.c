#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Reserve space for the input string
    char s[50];

    printf("Before: ");
    
    // Get the string from the user
    scanf("%s", s);

    printf("After:  ");

    // Loop through the string using its length
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Convert each character to uppercase and print it
        printf("%c", toupper(s[i]));
    }

    printf("\n");

    return 0;
}