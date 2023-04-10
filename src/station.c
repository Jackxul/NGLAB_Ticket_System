//station.c
//for the function used in both station_in.c and station_out.c
#include "station.h"

//for both
void check_remain(Acc *account){
	if(account)
		account->lock = (account->wallet < 0) ? 1 : 0;
	else
		printf("Error: Account is NULL\n");
}
//for in
char set_station_in_color(Acc *account , char *color); 
int set_station_in_no(Acc *account , int num);
//for out
char set_station_out_color(Acc *account , char *color); 
int set_station_out_no(Acc *account , int num);

void station(){





}

