#include <stdio.h>

int main()
{
    float price;
    int slices;

    printf("Enter the price of the pizza: ");
    scanf("%f", &price);

    printf("Enter the number of slices: ");
    scanf("%d", &slices);

    if (price < 50 && slices >= 3)
    {
        printf("You should buy this pizza\n");
    }
    else if (price >= 50 && slices > 8)
    {
        printf("You should buy this pizza\n");
    }
    else
    {
        printf("This pizza it too expensive\n");
    }

    return 0;
}