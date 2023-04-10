//Main.c
#include <stdio.h>
#include <stdlib.h>
#include "account.h"
#include "station.h"
#include "map.h"
int main(){
	Acc *acorigin = account_init();	
	//set the account
	set_account_number(acorigin, 0);
	set_account_name(acorigin, "Jack");
	set_account_wallet(acorigin, 99999);
	set_account_station_in_color(acorigin, 'R');
	set_account_station_in_no(acorigin, 1);
	set_account_station_out_color(acorigin, 'B');
	set_account_station_out_no(acorigin, 10);
	//print the account
	//
	//
	//some example of how to access account variables
	printf("Account Number: %d\n", get_account_number(acorigin));
	printf("Account Name: %s\n", get_account_name(acorigin));
	printf("Account Wallet: %d\n", get_account_wallet(acorigin));
	printf("Account Station In Color: %c ->", get_account_station_in_color(acorigin));
	printf("%d\n", get_account_station_in_no(acorigin));
	printf("Account Station Out Color: %c ->", get_account_station_out_color(acorigin));
	printf("%d\n", get_account_station_out_no(acorigin));

	//Need to be implemented
	stat_cal(get_account_station_in_color(acorigin), get_account_station_in_no(acorigin), get_account_station_out_color(acorigin), get_account_station_out_no(acorigin));



	//some example of how to access account variables
	int *p = &acorigin->wallet;
	printf("Wallet for now : %d\n", *p);

	printf("Enter Station ...\n");

	check_remain(acorigin);

	printf("Lock Stat : %d\n", acorigin->lock);

	printf("Exit Station ...\n");

	set_account_wallet(acorigin, -1);

	check_remain(acorigin);

	printf("Lock Stat : %d\n", acorigin->lock);

	return 0;
}
//EOF
