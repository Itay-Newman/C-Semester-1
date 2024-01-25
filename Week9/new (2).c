#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_die(int sides);

int main() {
    int sides;
    printf("Enter the number of sides in the die: \n");
    scanf("%d", &sides);

    printf("You rolled: %d\n", roll_die(sides));

    return 0;
}

int roll_die(int sides) {
    int random = 0;
    srand(time(NULL));
    random = rand() % sides + 1;
    return random;
}
  