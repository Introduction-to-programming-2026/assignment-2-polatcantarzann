#include <stdio.h>

// argc: Argument Count (number of words typed)
// argv: Argument Vector (the actual words typed)
int main(int argc, char *argv[])
{
    // If the user provided one extra argument (e.g., ./greet Polat)
    if (argc == 2)
    {
        // argv[0] is the program name, argv[1] is the first word after it
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        // If no name was provided, or too many names
        printf("hello, world\n");
    }

    return 0;
}