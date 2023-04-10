//account.h
//Jack_Xul
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	pthread_mutex_t lock;
    	int accountNumber;
    	char name[30];
    	int wallet;
	char station_in_color;
	int station_in_number;
	char station_out_color;
	int station_out_number;
} Acc;
/*	Account init 	*/
Acc *account_init();
/*	Account set 	*/
void set_account_number(Acc *account,int value);
void set_account_name(Acc *account,char *name);
void set_account_wallet(Acc *account,int value);
void set_account_station_in_color(Acc *account,char color);
void set_account_station_in_no(Acc *account,int num);
void set_account_station_out_color(Acc *account,char color);
void set_account_station_out_no(Acc *account,int num);
/*	Account get 	*/
int get_account_number(Acc *account);
char *get_account_name(Acc *account);
int get_account_wallet(Acc *account);
char get_account_station_in_color(Acc *account);
int get_account_station_in_no(Acc *account);
char get_account_station_out_color(Acc *account);
int get_account_station_out_no(Acc *account);

#endif /* ACCOUNT_H */
