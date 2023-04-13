//admin.c
#include "admin.h"
#include "station.h"
//for terminal echoing
#include <termios.h>
#include <unistd.h>
//
#define PSK_LEN 10


void get_psk(char *password){
	struct termios old_term, new_term;

    	/* Turn off terminal echoing */
	tcgetattr(STDIN_FILENO, &old_term);
    	new_term = old_term;
    	new_term.c_lflag &= ~(ECHO);
    	tcsetattr(STDIN_FILENO, TCSANOW, &new_term);
	/* Turn off terminal echoing */

	while(getchar()!= '\n')
		continue;

	scanf("%s", password);
	//login
	//printf("Login Status : %d \n", station_login(password));
	if(station_login(password))
		printf("Login Success\n");
	else{
		printf("Login Failed\n");
	}
	/*Turn on terminal echoing*/
	tcsetattr(STDIN_FILENO, TCSANOW, &old_term);
	/*Turn on terminal echoing*/
	printf("password is : %s", password);

}
	


void admin_menu()
{
	char PSK[PSK_LEN + 1];
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
			printf("Please enter the Admin PSK : ");
			
			get_psk(PSK);

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
