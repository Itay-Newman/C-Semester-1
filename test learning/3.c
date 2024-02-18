#include <stdio.h>

int main(void)
{
    int arr[] = {83, 82, 92, 36, 90, 48, 89, 38, 53, 77, 84, 16, 61, 34, 49, 47, 33, 25, 91, 27};
    int len = 20; // manually set the length of the array
    int biggestNum = arr[0]; // Initialize biggestNum with the first element of the array
    int i;

    for(i = 1; i < len; i++) // Start from the second element
    {
        if(arr[i] > biggestNum)
        {
            biggestNum = arr[i];
        }
    }
    
    printf("%d\n", biggestNum);
    return 0;
}
