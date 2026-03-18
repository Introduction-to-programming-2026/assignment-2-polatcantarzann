#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h;
    printf("Height: ");
    
    // Standard C way to get an integer input
    scanf("%d", &h);
    
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}