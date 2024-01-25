#include <stdio.h>
#define GRADES_NUM 5
int main()
{
	int i = 0;
	int arrHWGrades[GRADES_NUM] = {0};
	
	for(i = 0; i < GRADES_NUM; i++)
	{
		printf("please enter the grade: \n");
		scanf("%d", &arrHWGrades[i]);
	}

	return 0;
}
