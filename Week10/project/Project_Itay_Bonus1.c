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
char magicNum = '0;

typedef enum 
{
    easy = 1,
    medium,
    hard,
    crazy
} Difficulty;

// Function to print feedback about hits and misses
void printFeedback(int hits, int misses);

// Function to check if the input is within the allowed range (1-6)
int checkInput(int firstNumOfGuess, int secondNumOfGuess, int thirdNumOfGuess, int fourthNumOfGuess);

// Function to process a guess and calculate hits and misses
void processGuess(int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);

// Function to generate a random 4-digit code with distinct digits
void generateRandomNum(void);

// Function to display a losing animation
void printLoseAnimation(void);

// Function to display a winning animation
void printWinAnimation(void);

// Function for the easy difficulty level
void easyDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);

// Function for the medium difficulty level
void mediumDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);

// Function for the hard difficulty level
void hardDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode);

// Function for the crazy difficulty level
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
        printf("1. In each round, you try to guess the secret password (4 distinct digits)\n");
        printf("2. After every guess, you'll receive two hints about the password:\n");
        printf("   HITS:   The number of digits in your guess which were exactly right.\n");
        printf("   MISSES: The number of digits in your guess which belong to\n");
        printf("           the password but were misplaced.\n");
        printf("3. If you fail to guess the password after a certain number of rounds,\n");
        printf("   Pancratius will buy all the gifts for Hanukkah!!!\n\n");
        printf("Please choose the game level:\n");
        printf("1 - Easy (20 rounds)\n");
        printf("2 - Medium (15 rounds)\n");
        printf("3 - Hard (10 rounds)\n");
        printf("4 - Crazy (random number of rounds 5-25)\n");
        printf("Make a choice: ");
		
        while (1) 
        {
            scanf("%d", &choice);
            getchar();

            switch (choice) 
            {
                case easy:
                    easyDifficulty(20, firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);
                    break;
                case medium:
                    mediumDifficulty(15, firstNumOfCode, secondNumOfCode, thirdNumOfCode, fourthNumOfCode);
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
		printLoseAnimation();
        printf("Would you like to play again? (y/n): \n");
        playAgain = getch();
        getchar();

        printf("\n");
    }

    return 0;
}

// Function to generate a random 4-digit code with distinct digits
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

// Function to print feedback about hits and misses
void printFeedback(int hits, int misses) 
{
    printf("\nHints:");
    printf("	HITS: %d", hits);
    printf("	MISSES: %d", misses);
    printf("\n");
	
	return 0;
}

// Function to check if the input is within the allowed range (1-6)
int checkInput(int firstNumOfGuess, int secondNumOfGuess, int thirdNumOfGuess, int fourthNumOfGuess) 
{
    return (firstNumOfGuess >= 1 && firstNumOfGuess <= 6 &&
            secondNumOfGuess >= 1 && secondNumOfGuess <= 6 &&
            thirdNumOfGuess >= 1 && thirdNumOfGuess <= 6 &&
            fourthNumOfGuess >= 1 && fourthNumOfGuess <= 6);
}

// Function to process a guess and calculate hits and misses
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

// Function for the easy difficulty level
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
			printWinAnimation();
            break;
        }
    }
	return 0;
}

// Function for the medium difficulty level
void mediumDifficulty(int numRounds, int firstNumOfCode, int secondNumOfCode, int thirdNumOfCode, int fourthNumOfCode) 
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
			printWinAnimation();
            break;
        }
    }
	return 0;

}

// Function for the hard difficulty level
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
			printWinAnimation();
            break;
        }
    }
		return 0;
}

// Function for the crazy difficulty level
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
			printWinAnimation();
            break;
        }
    }
	return 0;

}

// Function to display a losing animation
void printLoseAnimation(void) 
{
    printf("   __\n");
    printf("  /  \\      ______________\n");
    printf(" |'.'|    |              |\n");
    printf(" |   |     |   RAAAAWR!  |\n");
    printf(" |'-'|    |______________\n");
    printf("  \\_/\n");
	return 0;

}

// Function to display a winning animation
void printWinAnimation(void) 
{
    printf(
        "              .-=========-.\n"
        "              \\'-=======-'/\n"
        "              _|   .=.   |_ \n"
        "             ((|  {{1}}  |)) \n"
        "              \\|   /|\\   |/\n"
        "               \\__ '`' __/\n"
        "                 _`) (`_\n"
        "               _/_______\\_\n"
        "              /___________\\\n"
    );
	return 0;

}
