#include <stdio.h>

#define SIZE 10

int main(void)
{
    int tableOfMultiplication[SIZE][SIZE] = {0};
    int i, j;

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            tableOfMultiplication[i][j] = (i + 1) * (j + 1);
        }
    }

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            printf("%d  ", tableOfMultiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}
