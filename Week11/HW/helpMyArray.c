/*********************************
* Class: MAGSHIMIM C1			 *
* Week 9           				 *
* Help my array					 *
**********************************/

#include <stdio.h>
#include <stdlib.h>

#define ARR_LENGTH 2

void initArray(int arr[]);
void printGrades(int first, int second);

int main(void)
{
	int myGrades[ARR_LENGTH] = {0};

	initArray(myGrades);
	
	int first = myGrades[0];
	int second = myGrades[1];	
	
	printGrades(first, second);
	return 0;
}

/*
Function will change values of array (input from user)
input: array to change
output: fixed array
*/
void initArray(int arr[])
{
	printf("Enter grades in English and history: ");
	scanf("%d %d", &arr[0], &arr[1]);
}

/*
Function will print two grades
input: the grades to print
output: none
*/
void printGrades(int first, int second)
{
	printf("My grade in English is: %d!\n",first);
	printf("My grade in History is %d! Great Success!\n",second);
}
