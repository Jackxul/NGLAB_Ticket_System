
//user.c
#include "user.h"
#include "station.h"
#include "account.h"
void user_menu()
{
	int choice = '\0';

	printf("|==================================|\n");
	printf("|                                  |\n");
	printf("|   Select    what    to    do     |\n");
	printf("|----------------------------------|\n");
	printf("|   1. Buy      A         Card     |\n");
	printf("|   2. Take     The       MRT      |\n");
	printf("|   3. Add      Value    (Top  Up) |\n");
	printf("|   4. Buy      One-Way   Ticket   |\n");
	printf("|==================================|\n");

	printf("Please enter your choice => ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			//buy_card();
			*account_init();
			free(account_init());
			break;
		case 2:
			//take_mrt();
			break;
		case 3:
			//add_value();
			break;
		case 4:
			//buy_one_way_ticket();
			break;
		default:
			printf("Invalid choice!\n");
			exit(0);
	}
}
