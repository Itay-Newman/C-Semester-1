#include <stdio.h>

int main()
{
    char letter;
    printf("Please enter a char: ");
    scanf(" %c", &letter);

    if(letter == 'C')
    {
        printf("UPPER");
    }
    else if(letter == 'c')
    {
        printf("lower");
    }
    else
    {
        printf("Illegal character");
    }

    return 0;
}