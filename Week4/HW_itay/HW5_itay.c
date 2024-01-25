#include <stdio.h>

int main()
{
	char firstLetter;
	char secondLetter;
	char thirdLetter;
	
	printf("please enter the first letter: \n");
	scanf("%c", &firstLetter);
	getchar();
	
	printf("please enter the second letter: \n");
	scanf("%c", &secondLetter);
	getchar();
	
	printf("please enter the third letter: \n");
	scanf("%c", &thirdLetter);
	
	printf("The name is %c%c%c", firstLetter, secondLetter, thirdLetter);
	
	return 0;
}
