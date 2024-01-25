#include <stdio.h>

int main()
{
  int num;

  do 
  {
    printf("please enter a number between 1-9: \n");
    scanf("%d", &num);
    if(num < 1 || num >9)
    {
      printf("invalid input! 1-9 only \n");
    }
    if(num >= 1 && num <= 9)
    {
      for(int i = 1; i <= num; i++)
      {
        for(int j = 1; j <= i; j++)
        {
          printf("%d", i);
        }
        printf("\n");
      }
    }
  } while (num < 1 || num > 9);
}
