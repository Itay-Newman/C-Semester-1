#include <stdio.h>

int main()
{
    char letter;
    printf("Please enter a char: ");
    scanf(" %c", &letter);

    letter == 'C' ? printf("UPPER") : letter == 'c' ? printf("lower") : printf("Illegal character");

    return 0;
}