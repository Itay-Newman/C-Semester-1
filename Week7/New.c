#include <stdio.h>

#define FIRST_PLAYER 0
#define NUM_PLAYER 2
#define NUM_MATCHES 10
#define MAX_REMOVE 3

int main()
{
	int player = FIRST_PLAYER;
	int matches = NUM_MATCHES;
	int remove = 0;
	
	printf("beginning NIM with %d matches. \nYou can remove up to %d matches at a time.\n\n", NUM_MATCHES, MAX_REMOVE);
	
	while(matches > 0)
	{
		printf("player %d it is your turn.\n", player + 1);
		do
		{
			printf("there is %d matches in the pile\n", matches);
			printf("you may remove 1-%d matches. \nHow many matches to remove?\n",MAX_REMOVE);
			scanf("%d", &remove);
		} 
		while(!(remove > 0 && remove <= MAX_REMOVE) || remove > matches);
		matches = matches - remove;
		if(matches == 0)
		{
			printf("player %d wins!\n", player + 1);
		}
		player = (player + 1) % NUM_PLAYER;
	}
	
	return 0;
}
