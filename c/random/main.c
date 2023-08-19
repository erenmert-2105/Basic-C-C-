// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper,
                            int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand()) % 11;
        printf("%d ", num);
    }
}

// Driver code
int main()
{
    int lower = 0, upper = 10, count = 100;


    printRandoms(lower, upper, count);

    return 0;
}
