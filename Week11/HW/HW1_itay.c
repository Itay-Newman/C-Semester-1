#include <stdio.h>

int main() 
{
    int arr[5] = {0};
    int i;
    int offset;

    // Fill array with 5 numbers from user
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Print array
    printf("Enter an offset: ");
    scanf("%d", &offset);

    // Print array with offset
    printf("Array with offset %d: ", offset);
    for(i = 0; i < 5; i++) 
    {
        printf("%d ", arr[(i + offset) % 5]);
    }

    return 0;
}
