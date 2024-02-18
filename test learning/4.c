#include <stdio.h>

int main(void)
{
    int i = 0;
    int num = 0;
    int fact = 1;

    printf("enter a number\n");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i)
    {
        fact *= i;
    }

    printf("fact of %d is: %d\n", num, fact);
    return 0;
}
