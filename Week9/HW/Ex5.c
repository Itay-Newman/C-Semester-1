/*********************************
* Class: MAGSHIMIM C1			 *
* Week 8           				 *
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max);
int areValidNumbers(int num1, int num2, int num3);

int main(void) {
    srand(time(NULL));

    int num1, num2, num3;

    do {
        num1 = generateRandomNumber(0, 100);
        num2 = generateRandomNumber(0, 100);
        num3 = generateRandomNumber(0, 100);
    } while (!areValidNumbers(num1, num2, num3));

    printf("Generated Numbers: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

int areValidNumbers(int num1, int num2, int num3) {
    int hasEven = (num1 % 2 == 0) || (num2 % 2 == 0) || (num3 % 2 == 0);
    int hasOdd = (num1 % 2 != 0) || (num2 % 2 != 0) || (num3 % 2 != 0);
    int hasGreaterThan50 = (num1 > 50) || (num2 > 50) || (num3 > 50);

    return hasEven && hasOdd && hasGreaterThan50;
}

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}
