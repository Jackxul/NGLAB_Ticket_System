//Main.c
#include <stdio.h>
#include <stdlib.h>
#include "account.h"

struct account *account1;
int main(){
	
	account1 = malloc(sizeof(struct account));
	account1->accountNumber = 1;
	account1->wallet = 100;
	printf("Account Number: %d \n", account1->accountNumber);
	printf("Wallet: %d \n", account1->wallet);



	return 0;
}
