#include <stdio.h>

int main() {
    int a, b, choice;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if(b == 0) {
        printf("Error! Cannot divide by zero. Try again.\n");
    }

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case 4:
		if (b == 0)
		{
			printf("can't divide by zero!!!\n")
		}
		else{
            result = (float)a / b;
            printf("Result: %.2f\n", result);
            break;
		}
        default:
            printf("choice is not valid.\n");
    }

    return 0;
}
