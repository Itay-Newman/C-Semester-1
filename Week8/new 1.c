#include <stdio.h>

void printTriangle(int num)
{
	int i = 0;
	int j = 0;
	for(i = 1; i <= num; i++)
	{
	    for(j = 1; j <= i; j++)
	    {
    		printf("1");
	    }
	    printf("\n");
	}
}

int main()
{
    int num;
    
    printf("please enter a number:");
    scanf("%d", &num);
    printTriangle(num);
}