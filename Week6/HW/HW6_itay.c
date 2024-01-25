#include <stdio.h>

int main()
{
	int num, reverse = 0, remainder;
	
	do{
		printf("please enter a number: ");
		scanf("%d", &num);
		if (num < 0){
			printf("invalid input! positive numbers only.\n");
	}
	
	}while(num < 0);
	
		printf("number: %d\n", num);
	
		while(num != 0) {
			remainder = num % 10;
			reverse = reverse * 10 + remainder;
			num /= 10;
    }
	
    printf("reverse: %d", reverse);
}
