//station.c
//for the function used in both station_in.c and station_out.c
#include "station.h"

//for both
//Need to be modified

void *station_login(char *PSK){
	pthread_mutex_lock(&ST.mutex);
	ST.lock = (strcmp(ST.PSK , PSK) != 0) ? 0 : 1;//0 login denied , 1 login accept
	pthread_mutex_unlock(&ST.mutex);
}



//
void check_remain(Acc *account){
	if(account)
		account->lock = (account->wallet < 0) ? 1 : 0; //set account lock for next time enter a station
	else
		printf("Error: Account is NULL\n");
}
//for in
char set_station_in_color(Acc *account , char *color){
	if(account){
		strcpy(account->station_in_color , color);
		return 0;
	}
	else{
		printf("Error: Account is NULL\n");
		return 1;
	}
}
int set_station_in_number(Acc *account , int num){
	if(account){
		account->station_in_number = num;
		return 0;
	}
	else{
		printf("Error: Account is NULL\n");
		return 1;
	}
}
//for out
char set_station_out_color(Acc *account , char *color){
	if(account){
		strcpy(account->station_out_color , color);
		return 0;
	}
	else{
		printf("Error: Account is NULL\n");
		return 1;
	}
}
int set_station_out_number(Acc *account , int num){
	if(account){
		account->station_out_number = num;
		return 0;
	}
	else{
		printf("Error: Account is NULL\n");
		return 1;
	}
}



void station(){





}

