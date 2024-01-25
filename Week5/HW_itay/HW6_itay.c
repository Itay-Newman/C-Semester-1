#include <stdio.h>

int main(void)
{
	const int minAge = 16;
	const int maxAge = 18;
	int age = 0;
	
	printf("please enter an age:\n");
	scanf("%d", &age);
	getchar();
	
	if(!age >= minAge && age <= maxAge) // switching the || which is or to && which is and
	{
		printf("YaY! your age is not between 16 and 18!\n");
		printf("you can have a phone\n");
	}	// add {} so the complialer know what to run in the event of what is in the if being true
	else //add an else so there are diffrrent outcomes
	{
	printf("Sorry, no phone for you...\n");
	}
	return 0;
}