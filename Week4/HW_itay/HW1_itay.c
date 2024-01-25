#include <stdio.h>
int main()
{
	char one = 'H';
	char two, three;
	
	printf("enter a character: ");
	two = getchar();
	getchar();
	
	printf("enter another character: \n");
	scanf("%c", &three);
	printf("the first char is: %c the char plus one is:%c \n", one, one + 1);
	
	int sumAllChars = one + two + three;
	int sumFirstAndThirdChars = one + three;
	
	printf("the numerical value of the first char is: %d\n", one);
	printf("the numerical sum of all the chars is: %d\n ", sumAllChars);
	printf("the numerical sum of the first and last intgers is: %d", sumFirstAndThirdChars);
	return 0;
}
