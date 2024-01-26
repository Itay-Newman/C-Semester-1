/*********************************
Class: MAGSHIMIM C1 
Week 9 
MagshiParty 
**********************************/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define NUM_GUESTS 200
#define FALSE 0
#define TRUE !FALSE

float averageAge(int ages[], int size);
int countKidsUnder12(int ages[], int size);
int checkGuestsAtAge(int ages[], int size, int targetAge);
int checkCouplesAtSameAge(int ages[], int size);
int findOldestGuest(int ages[], int size);
int findYoungestGuest(int ages[], int size);

int main(void) {
    int guestAges[NUM_GUESTS] = {42, 108, 95, 101, 90, 5, 79, 79, 83, 105, 66, 66, 2, 28, 2, 12, 116, 63, 28, 37,	
					 112, 85, 63, 34, 53, 23, 22, 117, 39, 96, 48, 7, 12, 19, 70, 113, 108, 20, 116,
					 55, 24, 52, 3, 94, 34, 105, 22, 32, 54, 29, 108, 45, 23, 118, 118, 20, 84, 22,
					 50, 59, 77, 36, 111, 43, 49, 107, 41, 63, 65, 89, 87, 46, 51, 10, 11, 111, 7, 22,
					 34, 69, 70, 24, 85, 35, 37, 81, 47, 57, 12, 29, 25, 40, 27, 44, 18, 59, 39, 43, 
					 10, 102, 34, 36, 80, 19, 25, 91, 100, 27, 114, 67, 102, 66, 45, 113, 31, 70, 18, 
					 94, 58, 73, 107, 91, 42, 37, 36, 48, 16, 95, 72, 53, 111, 71, 22, 5, 47, 71, 28, 
					 72, 8, 58, 98, 48, 34, 64, 66, 30, 50, 39, 102, 109, 63, 107, 27, 71, 94, 9,
					 61, 72, 43, 96, 11, 120, 25, 18, 69, 4, 116, 82, 3, 111, 92, 117, 15, 101, 37, 22, 
					 109, 40, 109, 5, 2, 55, 54, 80, 19, 99, 61, 69, 8, 108, 9, 14, 49, 44, 48, 22, 
					 31, 18, 14, 35};

    // Example usage:
    float avg = averageAge(guestAges, NUM_GUESTS);
    printf("Average Age: %.2f\n", avg);

    int kidsCount = countKidsUnder12(guestAges, NUM_GUESTS);
    printf("Number of Kids under 12: %d\n", kidsCount);

    int targetAge;
    printf("Enter an age to check if guests at that age exist: ");
    scanf("%d", &targetAge);
    int guestsAtAge = checkGuestsAtAge(guestAges, NUM_GUESTS, targetAge);
    if (guestsAtAge) {
        printf("There are guests at age %d.\n", targetAge);
    } else {
        printf("No guests at age %d.\n", targetAge);
    }

    int couplesAtSameAge = checkCouplesAtSameAge(guestAges, NUM_GUESTS);
    if (couplesAtSameAge) {
        printf("There are couples at the same age.\n");
    } else {
        printf("No couples at the same age.\n");
    }

    int oldestGuest = findOldestGuest(guestAges, NUM_GUESTS);
    printf("The oldest guest is %d years old.\n", oldestGuest);

    int youngestGuest = findYoungestGuest(guestAges, NUM_GUESTS);
    printf("The youngest guest is %d years old.\n", youngestGuest);

    return 0;
}

/* Function will return average age of party guests input: age array, number of guests output: average age */
float averageAge(int ages[], int size) {
    float avg = 0;

    // TODO: calculate average age
    for (int i = 0; i < size; i++) {
        avg += ages[i];
    }
    avg /= size;

    return avg;
}

/* Function will return the number of kids (under 12) at the party */
int countKidsUnder12(int ages[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (ages[i] < 12) {
            count++;
        }
    }

    return count;
}

/* Function will return TRUE if there are guests at a certain age, otherwise FALSE */
int checkGuestsAtAge(int ages[], int size, int targetAge) {
    int result = FALSE;

    for (int i = 0; i < size; i++) {
        if (ages[i] == targetAge) {
            result = TRUE;
            break;
        }
    }

    return result;
}

/* Function will return TRUE if there are couples of guests at the same age, otherwise FALSE */
int checkCouplesAtSameAge(int ages[], int size) {
    int result = FALSE;
    
    int targetAge;
    printf("Enter the age to find friends for: ");
    scanf("%d", &targetAge);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (ages[i] == targetAge && ages[j] == targetAge) {
                result = TRUE;
                break;
            }
        }
        if (result) {
            break;
        }
    }

    return result;
}


/* Function will return the age of the oldest guest */
int findOldestGuest(int ages[], int size) {
    int oldest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (ages[i] > oldest) {
            oldest = ages[i];
        }
    }

    return oldest;
}

/* Function will return the age of the youngest guest */
int findYoungestGuest(int ages[], int size) {
    int youngest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (ages[i] < youngest) {
            youngest = ages[i];
        }
    }

    return youngest;
}
