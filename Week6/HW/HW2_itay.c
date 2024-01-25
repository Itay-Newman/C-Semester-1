#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    char tryAgain;

    do {
		printf("please enter a number: \n");
		scanf("%d", &num);
		
		if(num <= 1 || num == 0)
		{
			printf("Invalid input! \n");
			printf("please enter a number: \n");
		    scanf("%d", &num);
		    for (i = 1; i <= num; i++)
			{
                printf("%d ", i * i);
            }
                printf("\n");
                printf("Would you like to try again?\n");
                printf("Press 'y' for yes or any other key for no\n");
                scanf(" %c", &tryAgain);
		}else
		{
			for (i = 1; i <= num; i++)
			{
                printf("%d ", i * i);
            }
            printf("\n");
            printf("Would you like to try again?\n");
            printf("Press 'y' for yes or any other key for no\n");
            scanf(" %c", &tryAgain);
		}
    } while (tryAgain == 'y');

    return 0;
}
