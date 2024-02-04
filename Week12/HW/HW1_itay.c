#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int isPalindrome(char str[], int length);

int main() {
    char inputString[MAX_SIZE];

    printf("Enter a string: ");
    fgets(inputString, MAX_SIZE, stdin);

    // Remove the newline character from the input string
    inputString[strcspn(inputString, "\n")] = '\0';

    int length = strlen(inputString);

    if (isPalindrome(inputString, length)) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}

int isPalindrome(char str[], int length) {
    int isPal = 1; // Assume it's a palindrome

    for (int i = 0, j = length - 1; i < j; ) {
        // Ignore spaces
        while (str[i] == ' ') {
            i++;
        }
        while (str[j] == ' ') {
            j--;
        }

        if (str[i] != str[j]) {
            isPal = 0; // Not a palindrome
            break;
        }

        i++;
        j--;
    }

    return isPal;
}
