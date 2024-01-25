/*********************************
* Class: MAGSHIMIM C1			 *
* Week 7           				 *
* CyberKiosk		 			 *
**********************************/

#include <stdio.h>
#include <stdlib.h>

#define SMALL_SHAKE_PRICE 6
#define BIG_SHAKE_PRICE 8
#define TLUSH_PENALTY 2

#define SMALL_CHOICE 'S'
#define BIG_CHOICE 'B'
#define FRUIT_SHAKE_CHOICE 'F'
#define MILK_SHAKE_CHOICE 'M'

/*
Bug Report: 
1. In line 81 there is a & missing
2. Wrote a getchar(); after every scanf to clear the buffer
3. in the takeOrder function i changed the type of input that is expected

*/


void printMenu(void);
void takeOrder(void);
void printReceipt(char sizeChoice, char typeChoice, int howMany, int hasTlush);


int main(void)
{
	printMenu();
	takeOrder();
	
	return 0;
}

/*
This functions print the menu.
input: none
output: none
*/
void printMenu(void)
{
	printf("Welcome to CyberKiosk!\n");
	printf("We have delicious fruit shakes and milkshakes (from rice milk)!\n");
	printf("Small shake costs %d NIS\n", SMALL_SHAKE_PRICE);
	printf("Big shake costs %d NIS\n", BIG_SHAKE_PRICE);
	printf("Do you have a tlush? hmmm.....\n\n\n");	
}

/*
Handles Orders and prints receipt.
input: none
output: none
*/
void takeOrder(void)
{
	char typeChoice = ' ';
	char sizeChoice = ' ';
	int howMany = 0;
	int hasTlush = 0;
	
	printf("What is your order?\n");
	printf("%c - fruitShake\n%c - milkShake\n", FRUIT_SHAKE_CHOICE, MILK_SHAKE_CHOICE); 
	scanf("%c", &typeChoice); 
	getchar();
	
	printf("Choose size\n%c-big\n%c-small\n", BIG_CHOICE, SMALL_CHOICE);
	scanf("%c",&sizeChoice); 
	getchar();

	printf("how many would you like (1-9)?\n");
	scanf("%d", &howMany);
	getchar();
	
	printf("Do you have a tlush? click 0 for no, any other number for yes.\n");
	scanf("%d", &hasTlush);
	
	printReceipt(sizeChoice, typeChoice, howMany, hasTlush);
	
	printf("You will have your order in a few minutes. Thank you for ordering from CyberKiosk!\n");
}

/*
Calculates the price and prints order info to screen
input: type, size and amount of shakes ordered, also if buyer has a tlush
output: none
*/
void printReceipt(char sizeChoice, char typeChoice, int howMany, int hasTlush)
{
	int shakePrice = 0, totalPrice = 0;
	
	printf("You ordered %d ", howMany);
	
	// SIZE
	if(BIG_CHOICE == sizeChoice)
	{
		shakePrice = BIG_SHAKE_PRICE;
		printf("BIG ");
	}
	else if (SMALL_CHOICE == sizeChoice)
	{
		shakePrice = SMALL_SHAKE_PRICE;
		printf("SMALL ");
	}
	else
	{
		printf("***Error! Wrong size***");
	}
	
	// TYPE
	if (FRUIT_SHAKE_CHOICE == typeChoice)
	{
		printf("fruitshakes.\n");
	}

	else if (MILK_SHAKE_CHOICE == typeChoice)
	{
		printf("milkshakes.\n");
	}
	else 
	{
		printf("***Error! Wrong type***");
	}
	
	// If costumer has a tlush
	if(hasTlush)
	{
		shakePrice += TLUSH_PENALTY;
	}
	
	// multiply price by number of shakes.
	totalPrice = shakePrice * howMany;
	
	printf("Total price: %d \n", totalPrice);
}
