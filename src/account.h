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
} Acc; 
void set_account_number(Acc *account,int value);
void set_account_name(Acc *account,char *name);
void set_account_wallet(Acc *account,int value);
int get_account_number(Acc *account);
char *get_account_name(Acc *account);
int get_account_wallet(Acc *account);


#endif /* ACCOUNT_H */
