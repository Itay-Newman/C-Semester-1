/*********************************
* Class: MAGSHIMIM C1             *
* Week 11                         *
**********************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = {'H', 'i', ' '};
    char str2[] = {'H', 'o'};

    strncat(str1, str2, 10 - strlen(str1) - 1);

    for (int i = 0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }

    return 0;
}
