#include <stdio.h>

int main() {
    char a = 'A';
    char z = 'Z';

    printf("a is: %c\n", a);
    printf("z is: %c\n", z);

    int num_letters = z - a - 1;

    printf("The number of letters in the English language is: %d\n", num_letters);

    return 0;
}
//ואז הורדתי אחד Z מהערך של A מה שעשיתי זה הורדתי את הערך אסקי של