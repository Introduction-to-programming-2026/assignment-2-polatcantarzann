#include <stdio.h>

// Number of scores to input
const int N = 3;

// Function prototype
float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // Ask user for N scores and store them in scores[]
    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        // Standard C way to get an integer and store it in the array
        scanf("%d", &scores[i]);
    }

    // Print the average with 2 decimal places
    printf("Average: %.2f\n", average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    // Compute the sum of all elements in the array
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    
    // Return the average (casting sum to float to get precise division)
    return (float) sum / (float) length;
}