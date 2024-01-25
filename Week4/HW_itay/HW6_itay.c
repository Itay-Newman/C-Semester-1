#include <stdio.h>

int main()
{
	char firstLetter;
	char secondLetter;
	char thirdLetter;
	int birthYear;
	int currentYear = 2023;
	int num1;
	
	printf("please enter the first letter: \n");
	scanf("%c", &firstLetter);
	getchar();
	
	printf("please enter the second letter: \n");
	scanf("%c", &secondLetter);
	getchar();
	
	printf("please enter the third letter: \n");
	scanf("%c", &thirdLetter);
	getchar();
	
	printf("Hey %c%c%c, please enter your birth year: \n",firstLetter, secondLetter, thirdLetter);
	scanf("%d", &birthYear);
	
	printf("please enter a number between 1 and 100: \n", num1);
	scanf("%d", &num1);
	
	int age = currentYear - birthYear;
	int num2 = age % num1;
	
	printf("your age is: %d\n", age);
	
	printf("%d %% %d = %d", age, num1, num2);
	
	return 0;
}
