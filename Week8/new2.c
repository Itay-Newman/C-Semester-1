#include <stdio.h>

void addAndPrint(int a, int b)
{
	printf("%d", num + num2);
}
void subAndPrint(int a, int b)
{
	b *= -1;
	addAndPrint(a, b);
	
}
int main()
{
	int x = 0, int y = 0;
	printf("please enter 2 numbers: \n");
	scanf("%d %d", &x, &y);
	addAndPrint(x, y);
	subAndPrint(x, y);
	return 0;
}