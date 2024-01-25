#include <stdio.h>

int userChoice();
int printChoice(int choice);

int main()
{
	int choice = 0;
	printf("Welcome to the Comedy Store!\n");
	
	choice = userChoice();
	
	printChoice(choice);
	
	return 0;
}

int userChoice()
{
	int choice;
	printf("What kind of a joke would you like?\n");
	printf("Programming joke - 0\n");
	printf("Knock-knock joke - 1\n");
	printf("Wordplay joke - 2\n");
	scanf("%d", &choice);
	
	return choice;
}

int printChoice(int choice)
{
	printf("Your Joke:\n");
	printf("----------\n");
	if (choice == 0)
	{
		printf("My mom asked me to go to the grocery store.\n");
		printf("She said: Buy a loaf of bread, and if they have eggs, get a dozen.\n");
		printf("I went and came back with 12 loaves of bread.\n");
		printf("My mom said: Why did you get 12 loaves of bread???\n");
		printf("I said: Because they had eggs!\n");
	}
	else if(choice == 1)
	{
		printf("Knock knock\n");
		printf("Who's there?\n");
		printf("Doris\n");
		printf("Doris Who?\n");
		printf("Doris locked, that's why I'm knocking!\n");
	}
	else if(choice == 2)
	{
		printf("What did the Eskimo write in his diary? (Hebrew)\n");
		printf("Yomani, haya kar.\n");
	}
	else
	{
		printf("A priest, a rabbi and a duck walk into a bar.\n");
		printf("The bartender says: Is this some kind of a joke?!\n");
	}
	
	printf("Press any key to continue . . .");
	getchar();
	
	return 0;
}
