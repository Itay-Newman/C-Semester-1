#include <stdio.h>

#define COLS 8
#define ROWS 8

int main(void)
{
    char checkers[8][8] = {'b'};
    int i = 0;
    int j = 0;
    for(i = 0; i < COLS; i++)
    {
        for(j = 0; j < ROWS; j++)
        {
            if((i + j) % 2 == 0)
            {
                checkers[i][j] = 'b';
            }
            else
            {
                checkers[i][j] = 'w';
            }
        }
    }
    for(i = 0; i < COLS; i++)
    {
        for(j = 0; j < ROWS; j++)
        {
            printf("%c ", checkers[i][j]);
        }
        printf("\n");
    }

    return 0;
}
