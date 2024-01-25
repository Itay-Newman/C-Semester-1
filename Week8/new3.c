#include <stdio.h>

void welcome(void)
{
	printf("my name is itay and i dont love functions!\n  ");
}

int main()
{
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		welcome();
	}
}