#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

int main(void)
{
    char str1[MAX_SIZE] = {0};
    printf("Enter a string: ");
    fgets(str1, MAX_SIZE, stdin);

    // Count the number of occurrences of each character in the string
    int count[256] = {0}; // Use a larger array to cover all possible ASCII characters
    for (int i = 0; i < strlen(str1); i++)
    {
        count[(unsigned char)str1[i]]++; // Ensure correct index for negative characters
    }

    // Find the most common character and its count
    char most_common = str1[0];
    int max_count = count[(unsigned char)str1[0]];
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > max_count)
        {
            max_count = count[i];
            most_common = i;
        }
    }

    // Find the second most common character and its count
    char second_most_common = most_common;
    int second_max_count = max_count;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > second_max_count && i != most_common)
        {
            second_max_count = count[i];
            second_most_common = i;
        }
    }

    // Swap the most common and second most common characters in the string
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == most_common)
        {
            str1[i] = second_most_common;
        }
        else if (str1[i] == second_most_common)
        {
            str1[i] = most_common;
        }
    }

    printf("Most common letter: %c\n", most_common);
    printf("Second most common letter: %c\n", second_most_common);
    printf("String with most common and second most common letters swapped: %s\n", str1);

    return 0;
}
