#include <stdio.h>

int main() 
{
    int num_1 = 0, num_2 = 0, num_3 = 0;
    float avg = 0.0;
    
    printf("Please enter three numbers:");
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    
    avg = (float)(num_1 + num_2 + num_3) / 3;
    printf("the average of those number is: %f", avg);
    return 0;
}
