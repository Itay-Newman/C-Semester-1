#include <stdio.h>
#include <string.h>

// Function to check if a password is valid
int isValidPassword(char password[]);
int main() {
    char password[20]; // Assuming a maximum length of 20 for the password

    // Input: Take a password from the user
    printf("Enter a password: ");
    scanf("%s", password);

    // Check if the password is valid
    if (isValidPassword(password)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
int isValidPassword(char password[]) {
    int length = strlen(password);
    int hasNumber = 0;
    int hasLowercase = 0;
    int hasUppercase = 0;
    char prevChar = '\0';
    int isValid = 1;

    // Check each character in the password
    for (int i = 0; i < length; i++) {
        char currentChar = password[i];

        // Check for repeated characters
        if (currentChar == prevChar) {
            isValid = 0;
        }

        // Check for a number
        if (currentChar >= '0' && currentChar <= '9') {
            hasNumber = 1;
        }

        // Check for a lowercase letter
        if (currentChar >= 'a' && currentChar <= 'z') {
            hasLowercase = 1;
        }

        // Check for an uppercase letter
        if (currentChar >= 'A' && currentChar <= 'Z') {
            hasUppercase = 1;
        }

        prevChar = currentChar;

        // Check if the password is too long
        if (length > 8 || !(length >= 6 && hasNumber && hasLowercase && hasUppercase)) {
            isValid = 0;
        }
    }

    return isValid;
}
