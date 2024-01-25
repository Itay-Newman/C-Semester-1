#include <stdio.h>
#include <math.h>

void geometricSeries(int firstElement, int ratio, int numElemnents);

int main()
{
	int firstElement = 0;
	int ratio = 0;
	int numElemnents = 0;
	
	printf("Enter first element of the series: \n");
	scanf("%d", &firstElement);
	getchar();
	printf("Enter the series ratio: \n");
	scanf("%d", &ratio);
	getchar();
	printf("Enter number of element: \n");
	scanf("%d", &numElemnents);
	getchar();
	
	geometricSeries(firstElement, ratio, numElemnents);
	return 0;
}
void geometricSeries(int firstElement, int ratio, int numElemnents)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i <= numElemnents; i++)
	{
		sum = sum + firstElement;
		firstElement = firstElement * ratio;
	}
	printf("The sum of the first %d elements is: %d\n", numElemnents, sum);
}
