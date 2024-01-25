#include <stdio.h>

int main()
{
    int num, digit;
    int even_product = 1, odd_product = 1;
    int even_count = 0, odd_count = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        num /= 10;

        if(digit == 0) // If the digit is 0, ignore it
        {
            continue;
        }

        if(digit % 2 == 0) // If the digit is even
        {
            if(even_count % 2 == 0) // If this is the first time we encounter this digit
            {
                even_product *= digit;
            }
            even_count++;
        }
        else // If the digit is odd
        {
            if(odd_count % 2 == 0) // If this is the first time we encounter this digit
            {
                odd_product *= digit;
            }
            odd_count++;
        }
    }

    printf("Product of distinct even digits is %d\n", even_product);
    printf("Product of distinct odd digits is %d\n", odd_product);

    return 0;
}
