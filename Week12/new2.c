#include <stdio.h>
#include <string.h>

#define STR_LEN 7

int main(void)
{
    char str[STR_LEN] = {0};
    printf("please enter a string, max length is %d:\n", STR_LEN - 1);
    fgets(str, STR_LEN, stdin);
    puts(str);

    return 0;
}
