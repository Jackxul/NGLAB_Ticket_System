//account.c
//  Created by  on 2012-11-13.
//private variables
#include "account.h"
//set functions
void set_account_number(Acc *account,int value){
	pthread_mutex_lock(&account->lock);
	account->accountNumber = value;
	pthread_mutex_unlock(&account->lock);
}
void set_account_name(Acc *account,char *name){
	pthread_mutex_lock(&account->lock);
	strcpy(account->name, name);
	pthread_mutex_unlock(&account->lock);
}
void set_account_wallet(Acc *account,int value){
	pthread_mutex_lock(&account->lock);
	account->wallet = value;
	pthread_mutex_unlock(&account->lock);
}
void set_account_station_in_color(Acc *account,char color){
	pthread_mutex_lock(&account->lock);
	account->station_in_color = color;
	pthread_mutex_unlock(&account->lock);
}
void set_account_station_in_no(Acc *account,int num){
	pthread_mutex_lock(&account->lock);
	account->station_in_number = num;
	pthread_mutex_unlock(&account->lock);
}
void set_account_station_out_color(Acc *account,char color){
	pthread_mutex_lock(&account->lock);
	account->station_out_color = color;
	pthread_mutex_unlock(&account->lock);
}
void set_account_station_out_no(Acc *account,int num){
	pthread_mutex_lock(&account->lock);
	account->station_out_number = num;
	pthread_mutex_unlock(&account->lock);


}//get functions
int get_account_number(Acc *account){
	int value;
	pthread_mutex_lock(&account->lock);
	value = account->accountNumber;
	pthread_mutex_unlock(&account->lock);
	return value;
}
char *get_account_name(Acc *account){
	char *name;
	pthread_mutex_lock(&account->lock);
	name = account->name;
	pthread_mutex_unlock(&account->lock);
	return name;
}
int get_account_wallet(Acc *account){
	int value;
	pthread_mutex_lock(&account->lock);
	value = account->wallet;
	pthread_mutex_unlock(&account->lock);
	return value;
}
char get_account_station_in_color(Acc *account){
	char color;
	pthread_mutex_lock(&account->lock);
	color = account->station_in_color;
	pthread_mutex_unlock(&account->lock);
	return color;
}
int get_account_station_in_no(Acc *account){
	int num;
	pthread_mutex_lock(&account->lock);
	num = account->station_in_number;
	pthread_mutex_unlock(&account->lock);
	return num;
}
char get_account_station_out_color(Acc *account){
	char color;
	pthread_mutex_lock(&account->lock);
	color = account->station_out_color;
	pthread_mutex_unlock(&account->lock);
	return color;
}
int get_account_station_out_no(Acc *account){
	int num;
	pthread_mutex_lock(&account->lock);
	num = account->station_out_number;
	pthread_mutex_unlock(&account->lock);
	return num;
}



void account(){



}
