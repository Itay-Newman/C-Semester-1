#include <stdio.h>

int main() {
    int h, m, s;

    printf("Please enter the time in the format hh:mm:ss: \n");
    scanf("%2d:%2d:%2d", &h, &m, &s);

    if(h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        printf("The time isn't valid.\n");
        return 0;
    }

    s++;
    if(s == 60) {
        s = 0;
        m++;
        if(m == 60) {
            m = 0;
            h++;
            if(h == 24) {
                h = 0;
            }
        }
    }

    printf("The time one second later is: %02d:%02d:%02d\n", h, m, s);

    return 0;
}
