/*********************************
* Class: MAGSHIMIM C1             *
* Week 9                           *
* MagshiParty                      *
**********************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM_GUESTS 200
#define FALSE 0
#define TRUE !FALSE

float averageAge(int ages[], int size);
int guestUnder12(int ages[], int size);
void findAge(int ages[], int size);
void checkCouples(int ages[], int size);
int youngestGuest(int ages[], int size);
int oldestGuest(int ages[], int size);

int main(void)
{
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

    printf("Average age: %.2f\n", averageAge(guestAges, NUM_GUESTS));
    printf("Number of kids under 12: %d\n", guestUnder12(guestAges, NUM_GUESTS));
    findAge(guestAges, NUM_GUESTS);
    checkCouples(guestAges, NUM_GUESTS);
    printf("The youngest guest is: %d\n", youngestGuest(guestAges, NUM_GUESTS));
    printf("The oldest guest is: %d\n", oldestGuest(guestAges, NUM_GUESTS));

    return 0;
}

float averageAge(int ages[], int size)
{
    float avg = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        avg += ages[i];
    }
    avg = avg / size;

    return avg;
}

int guestUnder12(int ages[], int size)
{
    int count = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        if (ages[i] <= 12)
        {
            count++;
        }
    }

    return count;
}

void findAge(int ages[], int size)
{
    int desiredAge = 0;
    printf("Enter desired age: ");
    scanf("%d", &desiredAge);

    int found = 0;
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (ages[i] == desiredAge)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Guest found!\n");
    }
    else
    {
        printf("No guest of this age.\n");
    }
}

void checkCouples(int ages[], int size)
{
    int desiredAge = 0;
    printf("Enter the age to check for couples: ");
    scanf("%d", &desiredAge);

    int coupleFound = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (ages[i] == desiredAge && ages[j] == desiredAge)
            {
                coupleFound = 1;
                break;
            }
        }

        if (coupleFound)
        {
            break;
        }
    }

    if (coupleFound)
    {
        printf("A couple of guests at the same age was found.\n");
    }
    else
    {
        printf("No couple found at the same age.\n");
    }
}

int youngestGuest(int ages[], int size)
{
    int i = 0;

    int smallest = ages[0];

    for (i = 0; i < size; i++)
    {
        if (ages[i] < smallest)
        {
            smallest = ages[i];
        }
    }
    return smallest;
}

int oldestGuest(int ages[], int size)
{
    int i = 0;

    int largest = ages[0];

    for (i = 0; i < size; i++)
    {
        if (ages[i] > largest)
        {
            largest = ages[i];
        }
    }

    return largest;
}
