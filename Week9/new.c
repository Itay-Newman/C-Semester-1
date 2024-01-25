#include <stdio.h>

float returnAverage(int num1, int num2, int num3);

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	
	printf("enter three numbers: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("the average is: %f", returnAverage(num1, num2, num3));
}


float returnAverage(int num1, int num2, int num3)
{
    float average = 0;
	average = (num1 + num2 + num3) / 3;
	
	return average;
}
