#include <stdio.h>

void printNum(int num);

int main(void)
{
	   int firstNum = -1;
	   int secondNum = 46;
   
   printNum(firstNum);
   printNum(secondNum);
   printNum(firstNum + secondNum);
   printNum(6);
}

// this is a function that prints a number
void printNum(int num) 
{
    printf("%d\n", num);
}
