/*********************************
* Class: MAGSHIMIM C1			 *
* Week 7           				 *
**********************************/

#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 172486
/*
Bug Report: 
1. differntiated between the get number function and the checkn number function
2. i wrote the notes better so it will be easier to read the code
*/
void welcome(void);
void usage(void);
void getNumber(void);
void printTwice(int number);
void checkNumber(int number);

int main(void)
{
	welcome();
	return 0;
}

/*
This function prints "welcome".
input: none
output: "Welcome to my cool program!"
*/
void welcomeUser(void)
{
	printf("Welcome to my cool program!\n");
	usage();
}

/*
This function prints what the program is for.
input: none
output: "My program gets a number from you - and prints it twice in a row!"
*/
void usageOfTheCode(void)
{
	printf("My program gets a number from you - and prints it twice in a row!\n");
	getNumber();
}

/*
The function gets a number.
input: the number
output: "Please enter a number between %d - %d: "
*/
void getNumber(void)
{
	int number = 0;
		
	printf("Please enter a number between %d - %d: \n", LOWER, UPPER);
	scanf("%d", &number);
	
	checkNumber(number);
}

/*
the function checks the number
input: none
output: if the number is incorrect it will print: "invalid choice"
*/
void checkNumber(int number)
{
	while(number < LOWER || number > UPPER)
	{
		printf("Invalid choice!\n");
		scanf("%d", &number);
	}
	printTwice(number);
}
/*
Prints the number twice. 
input: none
output: the number we got from the user written twice.
*/
void printTwice(int number)
{
	printf("The number twice in a row: %d%d", number, number);
}