#include <stdio.h>


int isPrime(int num);
int main(void)
{
    int num = 0;
    printf("enter a number: \n");
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
    int isPrime = 1;

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;
}