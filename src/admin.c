//admin.c
#include "admin.h"
#include "station.h"
void admin_menu()
{
	int choice = '\0';

	printf("|==================================|\n");
	printf("|                                  |\n");
	printf("|   Select    what    to    do     |\n");
	printf("|----------------------------------|\n");
	printf("|   1. Set     Station     Info    |\n");
	printf("|   2. Search     User     Info    |\n");
	printf("|                                  |\n");
	printf("|==================================|\n");

	printf("Please enter your choice => ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			//set_station_info();   need to implement (ask for PSK and call *station_login(*PSK))
			break;
		case 2:
			//search_user_info();   need to implement
			break;
		default:
			printf("Invalid Input\n");
			exit(0);
	}

}
