#include <stdio.h>
#include <string.h>

// Function to convert an integer to a string
void intToString(int number, char str[]) 
{
    int index = 0;
    int temp = (number >= 0) ? number : -number;

    // Handle the case when the number is 0 separately
    if (temp == 0) 
    {
        str[index++] = '0';
    }

    // Extract digits and build the string in reverse order
    while (temp > 0) 
    {
        int digit = temp % 10;
        str[index++] = '0' + digit;
        temp /= 10;
    }

    // Add the minus sign if the number is negative
    if (number < 0) 
    {
        str[index++] = '-';
    }

    // Null-terminate the string
    str[index] = '\0';

    // Reverse the string
    for (int i = 0; i < index / 2; i++) 
    {
        char tempChar = str[i];
        str[i] = str[index - i - 1];
        str[index - i - 1] = tempChar;
    }
}

int main() 
{
    int number;
    char str[20]; // Assuming a maximum length of 20 for the string

    // Input: Take an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Convert integer to string
    intToString(number, str);

    // Output: Print the string with plus-minus sign and its length
    printf("String: %c%s Length: %d\n", (number >= 0) ? '+' : '-', str, (int)strlen(str));

    return 0;
}
