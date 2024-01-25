#include <stdio.h>

enum difficultyLevel {easy, medium, hard};
enum difficultyLevel difficulty;

int main()
{
	printf("please Enter a difficulty level: 0 - easy 1 - medium 2 - hard\n");
	scanf("%d", &difficulty);
	
	return 0;
}
