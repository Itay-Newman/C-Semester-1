#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int firstNumOfCode = 0;
int secondNumOfCode = 0;
int thirdNumOfCode = 0;
int fourthNumOfCode = 0;

int firstNumOfGuess = 0;
int secondNumOfGuess = 0;
int thirdNumOfGuess = 0;
int fourthNumOfGuess = 0;
int hits = 0;
int misses = 0;
char magicNum = '0';

typedef enum 
{
    easy = 1,
    moderate,
    hard,
    crazy
} Difficulty;

void printFeedback(int hits, int misses);
int checkInput(int firstNumOfGuess, int secondNumOfGuess, int thirdNumOfGuess, int fourthNumOfGuess);
void processGuess(int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);
void generateRandomNum(void);

void easyDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);
void moderateDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);
void hardDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);
void crazyDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);

int main() 
{
    int choice;
    srand(time(NULL));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') 
	{

		generateRandomNum();

        printf("Welcome to 'MAGSHIMIM CODE-BREAKER'!!!\n");
        printf("A secret password was chosen to protect the credit card of Pancratius,\n");
        printf("the descendant of Antiochus.\n");
        printf("Your mission is to stop Pancratius by revealing his secret password.\n\n");
        printf("The rules are as follows:\n");
        printf("1. In each round you try to guess the secret password (4 distinct digits)\n");
        printf("2. After every guess, you'll receive two hints about the password:\n");
        printf("   HITS:   The number of digits in your guess which were exactly right.\n");
        printf("   MISSES: The number of digits in your guess which belong to\n");
        printf("           the password but were miss-placed.\n");
        printf("3. If you fail to guess the password after a certain number of rounds,\n");
        printf("   Pancratius will buy all the gifts for Hanukkah!!!\n\n");
        printf("Please choose the game level:\n");
        printf("1 - Easy (20 rounds)\n");
        printf("2 - Moderate (15 rounds)\n");
        printf("3 - Hard (10 rounds)\n");
        printf("4 - Crazy (random number of rounds 5-25)\n");
        printf("Make a choice: ");
		
        while (1) 
		{

            scanf("%d", &choice);
            getchar();

            switch (choice) {
                case easy:
                    easyDifficulty(20, firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);
                    break;
                case moderate:
                    moderateDifficulty(15, firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);
                    break;
                case hard:
                    hardDifficulty(10, firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);
                    break;
                case crazy:
                    crazyDifficulty(rand() % 21 + 5, firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);
                    break;
            }
            break;
        }

        printf("OOOOHHHH!!! Pancratius won and bought all of Hanukkah's gifts. Nothing left for you...\n");
        printf("The secret password was %d%d%d%d\n", firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);
		printf("\n");
        printf("Would you like to play again? (y/n): \n");
        playAgain = getch();
        getchar();

        printf("\n");
    }

    return 0;
}
//generates a random number
void generateRandomNum(void) 
{
    firstNumOfCode = rand() % 6 + 1;
    secondNumOfCode = rand() % 6 + 1;
    thirdNumOfCode = rand() % 6 + 1;
    fourthNumOfCode = rand() % 6 + 1;

    // Ensure distinct digits
    while (secondNumOfCode == firstNumOfCode)
        secondNumOfCode = rand() % 6 + 1;

    while (thirdNumOfCode == firstNumOfCode || thirdNumOfCode == secondNumOfCode)
        thirdNumOfCode = rand() % 6 + 1;

    while (fourthNumOfCode == firstNumOfCode || fourthNumOfCode == secondNumOfCode || fourthNumOfCode == thirdNumOfCode)
        fourthNumOfCode = rand() % 6 + 1;
	return 0;
}
//print the hits and misses
void printFeedback(int hits, int misses)
{
    printf("\nHints:");
    printf("	HITS: %d", hits);
    printf("	MISSES: %d", misses);
    printf("\n");
	
	return 0;
}
// checks if the input is legal
int checkInput(int firstNumOfGuess, int secondNumOfGuess, int thirdNumOfGuess, int fourthNumOfGuess) 
{
    int isValid = 1;  // Assume input is valid by default

    // Check if there are any duplicate numbers
    if (firstNumOfGuess == secondNumOfGuess ||
        firstNumOfGuess == thirdNumOfGuess ||
        firstNumOfGuess == fourthNumOfGuess ||
        secondNumOfGuess == thirdNumOfGuess ||
        secondNumOfGuess == fourthNumOfGuess ||
        thirdNumOfGuess == fourthNumOfGuess) 
		{
        printf("\nIllegal input. Please enter four distinct numbers between 1 and 6.\n");
        isValid = 0;  // Set isValid to 0 if there are duplicates
    }

    // Check if all numbers are within the valid range
    if (!(firstNumOfGuess >= 1 && firstNumOfGuess <= 6 &&
          secondNumOfGuess >= 1 && secondNumOfGuess <= 6 &&
          thirdNumOfGuess >= 1 && thirdNumOfGuess <= 6 &&
          fourthNumOfGuess >= 1 && fourthNumOfGuess <= 6)) 
		  {
        printf("Invalid input. Please enter numbers between 1 and 6.\n");
        isValid = 0;  // Set isValid to 0 if input is out of range
    }

    return isValid;
}
//calculate the hits and misses
void processGuess(int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode) 
{
    hits = 0;
    misses = 0;

    if (firstNumOfGuess == firstNumOfCode) 
	{
        hits++;
    } 
	else if (firstNumOfGuess == secondNumOfCode || firstNumOfGuess == thirdNumOfCode || firstNumOfGuess == fourthNumOfCode) 
	{
        misses++;
    }

    if (secondNumOfGuess == secondNumOfCode) 
	{
        hits++;
    } 
	else if (secondNumOfGuess == firstNumOfCode || secondNumOfGuess == thirdNumOfCode || secondNumOfGuess == fourthNumOfCode) 
	{
        misses++;
    }

    if (thirdNumOfGuess == thirdNumOfCode)
	{
        hits++;
    } 
	else if (thirdNumOfGuess == firstNumOfCode || thirdNumOfGuess == secondNumOfCode || thirdNumOfGuess == fourthNumOfCode) 
	{
        misses++;
    }
    if (fourthNumOfGuess == fourthNumOfCode) 
	{
        hits++;
    } 
	else if (fourthNumOfGuess == firstNumOfCode || fourthNumOfGuess == secondNumOfCode || fourthNumOfGuess == thirdNumOfCode) 
	{
        misses++;
    }

    printFeedback(hits, misses);
	
	return 0;
}
// the easy difficulty
void easyDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode) 
{
    int i;
    for (i = 1; i <= numRounds; i++) 
	{
        printf("Write your guess (only 1-6, no enter is needed): \n");
        printf("%d guesses left\n", numRounds - i + 1);

        firstNumOfGuess = getch() - magicNum;
        printf("%d", firstNumOfGuess);
        secondNumOfGuess = getch() - magicNum;
        printf("%d", secondNumOfGuess);
        thirdNumOfGuess = getch() - magicNum;
        printf("%d", thirdNumOfGuess);
        fourthNumOfGuess = getch() - magicNum;
        printf("%d", fourthNumOfGuess);

        if (!checkInput(firstNumOfGuess, secondNumOfGuess, thirdNumOfGuess, fourthNumOfGuess)) 
		{
            printf("\nOnly 1-6 are allowed, try again!\n");
            i--;
            continue;
        }

        processGuess(firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);

        if (hits == 4) 
		{
            printf("Congratulations! You guessed the password!\n");
            break;
        }
    }
	
	return 0;
}
// the medium difficulty
void moderateDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode) 
{
    int i;
    for (i = 1; i <= numRounds; i++) 
	{
        printf("Write your guess (only 1-6, no enter is needed): \n");
        printf("%d guesses left\n", numRounds - i + 1);

        firstNumOfGuess = getch() - magicNum;
        printf("%d", firstNumOfGuess);
        secondNumOfGuess = getch() - magicNum;
        printf("%d", secondNumOfGuess);
        thirdNumOfGuess = getch() - magicNum;
        printf("%d", thirdNumOfGuess);
        fourthNumOfGuess = getch() - magicNum;
        printf("%d", fourthNumOfGuess);

        if (!checkInput(firstNumOfGuess, secondNumOfGuess, thirdNumOfGuess, fourthNumOfGuess)) 
		{
            printf("\nOnly 1-6 are allowed, try again!\n");
            i--;
            continue;
        }

        processGuess(firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);

        if (hits == 4) 
		{
            printf("Congratulations! You guessed the password!\n");
            break;
        }
    }
	
	return 0;
}
//the hard difficulty
void hardDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode)
{
    int i;
    for (i = 1; i <= numRounds; i++) 
	{
        printf("Write your guess (only 1-6, no enter is needed): \n");
        printf("%d guesses left\n", numRounds - i + 1);

        firstNumOfGuess = getch() - magicNum;
        printf("%d", firstNumOfGuess);
        secondNumOfGuess = getch() - magicNum;
        printf("%d", secondNumOfGuess);
        thirdNumOfGuess = getch() - magicNum;
        printf("%d", thirdNumOfGuess);
        fourthNumOfGuess = getch() - magicNum;
        printf("%d", fourthNumOfGuess);

        if (!checkInput(firstNumOfGuess, secondNumOfGuess, thirdNumOfGuess, fourthNumOfGuess)) 
		{
            printf("\nOnly 1-6 are allowed, try again!\n");
            i--;
            continue;
        }

        processGuess(firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);

        if (hits == 4) 
		{
            printf("Congratulations! You guessed the password!\n");
            break;
        }
    }
	return 0;

}
// the crazy difficulty
void crazyDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode) 
{
    int i;
    for (i = 1; i <= numRounds; i++) 
	{
        printf("Write your guess (only 1-6, no enter is needed): \n");
        printf("CRAZY MODE!!!\n");

        firstNumOfGuess = getch() - magicNum;
        printf("%d", firstNumOfGuess);
        secondNumOfGuess = getch() - magicNum;
        printf("%d", secondNumOfGuess);
        thirdNumOfGuess = getch() - magicNum;
        printf("%d", thirdNumOfGuess);
        fourthNumOfGuess = getch() - magicNum;
        printf("%d", fourthNumOfGuess);

        if (!checkInput(firstNumOfGuess, secondNumOfGuess, thirdNumOfGuess, fourthNumOfGuess)) 
		{
            printf("\nOnly 1-6 are allowed, try again!\n");
            i--;
            continue;
        }

        processGuess(firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);

        if (hits == 4)
		{
            printf("Congratulations! You guessed the password!\n");
            break;
        }
    }
	return 0;
}
