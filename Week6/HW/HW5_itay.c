#include <stdio.h>

int main()
{
    int num;
    int i;
    int j;
    int total;
    for(num = 2; num <= 1000; num++)
    {
        j = 1;
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                j = 0;
                break;
            }
        }
        if(j == 1)
        {
            printf("prime number: %d\n", num);
			total++;
        }
    }
    printf("the number of prime numbers are: %d", total);
    
    return 0;
}
