#include <stdio.h>

int main()
{
    char arrMyName[12];
    int length = sizeof(arrMyName) / sizeof(arrMyName[0]);

    arrMyName[0] = 'i';
    arrMyName[1] = 't';
    arrMyName[2] = 'a';
    arrMyName[3] = 'y';
    arrMyName[4] = ' ';
    arrMyName[5] = 'n';
    arrMyName[6] = 'e';
    arrMyName[7] = 'w';
    arrMyName[8] = 'm';
    arrMyName[9] = 'a';
    arrMyName[10] = 'n';
    arrMyName[11] = '\0';  // Null-terminate the string

    for (int i = 0; i < length; i++)
    {
        printf("%c", arrMyName[i]);
    }

    return 0;
}
