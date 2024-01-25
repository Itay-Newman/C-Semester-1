#include <stdio.h>
#include <stdbool.h>

int main()
{
    int player1Num = 0;
    int player2Num = 0;
    bool player1Turn = true;
    bool gameOver = false;

    while (!gameOver)
    {
        if(player1Turn)
        {
            printf("Player 1 please enter a number: ");
            scanf("%d", &player1Num);

            if(player1Num < 1 || player1Num > 100 || player1Num < player2Num || player1Num > player2Num + 10)
            {
                printf("This number is illegal! ");
            }
            else
            {
                player1Turn = false;

                if(player1Num >= 100)
                {
                    printf("Player 1 wins! ");
                    gameOver = true;
                }
            }
        }
        else
        {
            printf("Player 2 please enter a number: ");
            scanf("%d", &player2Num);

            if(player2Num < 1 || player2Num > 100 || player2Num < player1Num || player2Num > player1Num + 10)
            {
                printf("This number is illegal! ");
            }
            else
            {
                player1Turn = true;

                if(player2Num >= 100)
                {
                    printf("Player 2 wins!");
                    gameOver = true;
                }
            }
        }
    }
    return 0;
}
