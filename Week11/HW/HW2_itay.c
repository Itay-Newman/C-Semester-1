#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_OF_FACES 6

int main() 
{
    srand(time(NULL));
    int i;
    int results[9999];
    int counters[NUM_OF_FACES] = {0};

    // Roll the die 9999 times and store the results in an array
    printf("Rolling the die 9999 times...\n");
    for(i = 0; i < 9999; i++) 
    {
        results[i] = rand() % NUM_OF_FACES + 1;
    }

    // Count the rolls of each side
    for(i = 0; i < 9999; i++) 
    {
        counters[results[i] - 1]++;
    }

    // Print the results
    printf("Counts for each side:\n");
    for(i = 0; i < NUM_OF_FACES; i++) 
    {
        printf("Side %d: %d\n", i + 1, counters[i]);
    }

    return 0;
}
