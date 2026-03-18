#include <stdio.h>

// Function prototype
int string_length(char s[]);

int main(void)
{
    // Reserve space for 50 characters
    char name[50];
    
    printf("Name: ");
    
    // Get string input from user
    scanf("%s", name);

    int len = string_length(name);
    printf("%i\n", len);
    
    return 0;
}

int string_length(char s[])
{
    int n = 0;
    
    // Loop until the null terminator '\0' is found
    while (s[n] != '\0')
    {
        n++;
    }
    
    return n;
}
