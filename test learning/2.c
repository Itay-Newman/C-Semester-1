#include <stdio.h>

int sum(int a, int b) 
{
    return a + b;
}

int main(void)
{
    int a = 0;
    int b = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = sum(a, b);
    printf("%d", sum);

    return 0;
}
