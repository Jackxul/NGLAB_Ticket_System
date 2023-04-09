//account.c
//  Created by  on 2012-11-13.
//private variables
#include "account.h"

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
void account(){



}
