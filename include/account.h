//account.h
//Jack_Xul
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
	pthread_mutex_t mutex;
    	int accountNumber;		//int		1
    	char name[30];			//char[] 	2
    	int wallet;			//int		3
	char station_in_color[5];	//char[]	4
	int station_in_number;		//int		5
	char station_out_color[5];	//char[]	6
	int station_out_number;		//int		7
	int lock;//0:unlock 1:lock	//int 		8*
	void (*loadfile)(int);		//function	9
} Acc;
/*	Account init 	*/
Acc *account_init(int fileno);
/*	Account set 	*/
void set_account_number(Acc *account,int value);
void set_account_name(Acc *account,char *name);
void set_account_wallet(int *value);
/*	Account get 	*/
int get_account_number(Acc *account);
char *get_account_name(Acc *account);
int get_account_wallet(Acc *account);
char *get_account_station_in_color(Acc *account);
int get_account_station_in_no(Acc *account);
char *get_account_station_out_color(Acc *account);
int get_account_station_out_no(Acc *account);
void loadfile(int fileno);

#endif /* ACCOUNT_H */
