#include <stdio.h>


int isPrime(int num);
int main(void)
{
    int num = 0;
    printf("enter a number");
    scanf("%d", &num);

    if(isPrime(num) == 0)
    {
        printf("%d is not prime", num);
    }
    else
    {
        printf("%d is prime", num);
    }

    return 0;
}

int isPrime(int num)
{
    int i;
    int answer = 0;
    for (i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
             answer = 1;
        }
    }
    return answer;
}