#include <stdio.h>

int main(void)
{
    // Reserve space for the name
    char name[50];

    printf("What's your name? ");
    
    // Get the name from the user
    scanf("%s", name);

    // Print the output
    printf("hello, %s\n", name);

    return 0;
}