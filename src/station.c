//station.c
//for the function used in both station_in.c and station_out.c
#include "station.h"

//for both
//Need to be modified
void check_remain(Acc *account){
	if(account)
		account->lock = (account->wallet < 0) ? 1 : 0; //set account lock for next time enter a station
	else
		printf("Error: Account is NULL\n");
}
//for in
//Need to implement
char set_station_in_color(Acc *account , char *color); 
int set_station_in_no(Acc *account , int num);
//for out
//Need to implement
char set_station_out_color(Acc *account , char *color); 
int set_station_out_no(Acc *account , int num);



void station(){





}

