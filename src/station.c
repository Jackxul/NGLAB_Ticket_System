//station.c
//for the function used in both station_in.c and station_out.c
#include "station.h"
#include "station_in.h"
#include "station_out.h"

//for both
//Need to be modified

bool station_login(char *PSK){
	pthread_mutex_lock(&ST.mutex);
	if(strlen(PSK) == strlen(ST.PSK))
		ST.lock = (strcmp(ST.PSK , PSK) != 0) ? 0 : 1;//0 login denied , 1 login accept
	else
		ST.lock = 0;
	pthread_mutex_unlock(&ST.mutex);

	//printf("ST Lock = %d\n" ,ST.lock);

	if(ST.lock)
		return true;
	else
		return false;
}

void *In_set(char *color , int *num ){
	if(!ST.lock){
		pthread_mutex_lock(&ST.mutex);
		strcpy(ST.in_color , color);
		ST.in_number = *num;
		pthread_mutex_unlock(&ST.mutex);
	}
	else{
		printf("Access Denied!\nReason : Station is locked\n");
	}
}

void *Out_set(char *color , int *num ){
	if(!ST.lock){
		pthread_mutex_lock(&ST.mutex);
		strcpy(ST.out_color , color);
		ST.out_number = *num;
		pthread_mutex_unlock(&ST.mutex);
	}
	else{
		printf("Access Denied!\nReason : Station is locked\n");
	}
}
//for in
void check_remain(Acc *account){
	if(account)
		account->lock = (account->wallet < 0) ? 1 : 0; //set account lock for next time enter a station
	else
		printf("Error: Account is NULL\n");
}
//for in
char set_station_in(Acc *account , char *color , int num){
	if(account){
		pthread_mutex_lock(&account->mutex);
		strcpy(account->station_in_color , ST.in_color);
		account->station_in_number = ST.in_number;
		pthread_mutex_unlock(&account->mutex);
		return 0;
	}
	else{
		printf("Error: Account is NULL\n");
		return 1;
	}
}
//for out
char set_station_out(Acc *account , char *color , int num){
	if(account){
		pthread_mutex_lock(&account->mutex);
		strcpy(account->station_out_color , ST.out_color);
		account->station_out_number = ST.out_number;
		pthread_mutex_unlock(&account->mutex);
		return 0;
	}
	else{
		printf("Error: Account is NULL\n");
		return 1;
	}
}



void station(){





}

