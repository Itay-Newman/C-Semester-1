#include <stdio.h>

int main()
{
	int num1 = 0;
	int i = 0;
	int num2 = 0;
	
	printf("please enter a whole positive number: \n");
	scanf("%d", &num1);
	
	for(i = 1; i <= num1 / 2; i++)
	{	
		if(num1 % i == 0)
		{   
			num2 = num2 + i;
		}
	}
		if (num1 == num2)
		{
			printf("Yes! The number is perfect");
		}
		else
		{
			printf("No! The number is not perfect");
		}
	
	return 0;
}
