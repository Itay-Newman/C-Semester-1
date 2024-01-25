#include <stdio.h>//we needed to add this library
#define ILSToDirham 1.0873 //give the define a name that explains what the define is used for

int main()
{
  int x = 1;//added spacing so the code would be easier to read
  printf("Welcome to United Arab Emirates, how many ILS you have?\n");
  scanf("%d", &x);//change the dollar sign for an ampersand & added a space after the comma to make the code easier to read
  printf("You have %.2f Dirham\n", ILSToDirham*x);//added a f to the print & fixd the XXX to ILSToDirham

  return 0;
}
