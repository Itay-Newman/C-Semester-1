#include <stdio.h>

int main(void)
{
    int x = 2; // Start from the first even number

    while(x <= 20)
    {
        printf("%d\n", x);
        x += 2; // Move to the next even number
    }

    return 0;
}
