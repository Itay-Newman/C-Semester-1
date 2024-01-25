#include <stdio.h>
int main()
{
	int cousin1 = 4;
	int cousin2 = 20;
	int cousin3 = 23;
	int cousin4 = 18;
	int cousin5 = 15;
	int grampa = 79;
	int granpa = 72;
	int sumCousins = cousin1 + cousin2 + cousin3 + cousin4 + cousin5;
	int sumGranparents = grampa + granpa;
	printf("cousins ages are: %d, %d, %d, %d, %d and the sum is %d\n" ,cousin1, cousin2, cousin3, cousin4, cousin5, sumCousins);
	printf("granparents  ages are: %d, %d and the sum is: %d" ,grampa, granpa, sumGranparents);
	return 0;
	getchar();
}
