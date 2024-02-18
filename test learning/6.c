#include <stdio.h>

void bubbleSort(int array[], int size);
void printArray(int array[], int size);

int main(void)
{
    int array[21] = {60, 82, 61, 87, 99, 49, 73, 62, 88, 2, 78, 92, 45, 15, 71, 19, 26, 64, 83, 18, 66};
    int size = 21;

    bubbleSort(array, size);

    printf("Sorted array in ascending order: \n");
    printArray(array, size);
}
void bubbleSort(int array[], int size)
{
    int i = 0;
    int j = 0;

    for (j = 0; i < size - 1; ++i) 
    {
        for(i = 0; i < size - i - 1; ++i)
        {  
            if(array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
void printArray(int array[], int size)
{
    int i = 0;
    for(i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}