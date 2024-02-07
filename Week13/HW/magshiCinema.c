/*********************************
* Class: MAGSHIMIM C1			 *
* Week 13           			 *
* Class solution 2  			 *
**********************************/

#include <stdio.h>

#define ROWS 5
#define SEATS_IN_ROW 3

#define CHEAP_TICKET_PRICE 25
#define NORMAL_TICKET_PRICE 35
#define VIP_TICKET_PRICE 50

void printCinema(int cinema[][SEATS_IN_ROW], int rows);
int buyTicket(int cinema[][SEATS_IN_ROW], int row, int seat);
int occupiedSeats(int cinema[][SEATS_IN_ROW]);
int chooseSeat(int cinema[][SEATS_IN_ROW]);
void updatePrices(int cinema[][SEATS_IN_ROW], int discount);

int main(void)
{
	int cinema[ROWS][SEATS_IN_ROW] = {{CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE},
									  {NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE},
									  {NORMAL_TICKET_PRICE, VIP_TICKET_PRICE, NORMAL_TICKET_PRICE},
									  {NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE},
									  {CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE}};
	
	int choice;
    	do
    	{
        	printf("\nwelcome to MagshiCinema\n");
			printf("select an option:\n");
        	printf("1. Print cinema hall\n");
        	printf("2. Buy a ticket\n");
        	printf("3. print number of taken seats\n");
        	printf("4. Choose a seat automatically\n");
        	printf("5. set a discount for all available seats\n");
        	printf("6. Exit\n");
        	printf("Enter your choice (1-6): ");
        	scanf("%d", &choice);

        	switch (choice)
        	{
        	case 1:
            	printCinema(cinema, ROWS);
            	break;
        	case 2:
            	{
                	int row, seat;
                	printf("Enter row number (0-4): ");
                	scanf("%d", &row);
            		printf("Enter seat number (0-2): ");
                	scanf("%d", &seat);
                	int success = buyTicket(cinema, row, seat);
                	if(success)
                	{
                    	printf("Ticket purchased successfully.\n");
                	}
                	else
                	{
                    	printf("Seat already occupied.\n");
                	}
                	break;
            	}
        	case 3:
            	printf("Number of occupied seats: %d\n", occupiedSeats(cinema));
            	break;
        	case 4:
            	{
                	int price = chooseSeat(cinema);
                	if (price > 0)
                	{
                    	printf("Price of the ticket: %d\n", price);
                	}
                	else
                	{
                    	printf("No available seats.\n");
                	}
                	break;
            	}
        	case 5:
            	{
                	int discount;
                	printf("Enter discount: ");
                	scanf("%d", &discount);
                	updatePrices(cinema, discount);
                	printf("Prices updated successfully.\n");
                	break;
            	}
        	case 6:
            	printf("Exiting program.\n");
            	break;
        	default:
            	printf("Invalid choice. Please enter a number between 1 and 6.\n");
            	break;
        }
    } while (choice != 6);
	
	return 0;
}

/**
Print a cinema hall ticket prices
Input: 	hall, and number of rows
Output: None
*/
void printCinema(int cinema[][SEATS_IN_ROW], int rows)
{
	int row = 0;
	int col = 0;
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < SEATS_IN_ROW; j++)
        {
            printf("%d\t", cinema[i][j]);
        }
        printf("\n");
	}
}
int buyTicket(int cinema[][SEATS_IN_ROW], int row, int seat)
{
	int success = 0;

	if (cinema[row][seat] != -1)
	{
		cinema[row][seat] = -1;
		success = 1;
	}

	return success;
}
int occupiedSeats(int cinema[][SEATS_IN_ROW])
{
	int count = 0;
	int i = 0;
    int j = 0;
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < SEATS_IN_ROW; j++)
		{
			if(cinema[i][j] == -1)
			{
				count++;
			}
		}
	}
	return count;
}
int chooseSeat(int cinema[][SEATS_IN_ROW])
{
	int cheapestPrice = VIP_TICKET_PRICE;
	int cheapestRow = -1;
	int cheapestSeat = -1;
	int ticketPrice = -1;
	int i = 0;
	int j = 0;
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < SEATS_IN_ROW; j++)
		{
			if((cinema[i][j] == -1) && cinema[i][j] < cheapestPrice)
			{
				cheapestPrice == cinema[i][j];
				cheapestRow = i;
				cheapestSeat = j;
				ticketPrice = cheapestPrice;
            }
		}
	}
	
	if(cheapestPrice != -1 && cheapestPrice != -1 && ticketPrice != -1)
	{
		buyTicket(cinema, cheapestRow, cheapestSeat);
	}

	return ticketPrice;
}
void updatePrices(int cinema[][SEATS_IN_ROW], int discount)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < SEATS_IN_ROW; j++)
        {
            if(cinema[i][j]!= -1)
            {
                cinema[i][j] = cinema[i][j] - discount;
				if(cinema[i][j] < 0)
				{
					cinema[i][j] = 0;
				}
            }
        }
	}
}
