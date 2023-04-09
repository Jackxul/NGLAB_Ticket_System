//Main.c
#include <stdio.h>
#include <stdlib.h>
#include "account.h"

int main(){
	Acc acorigin;	
	//set the account
	set_account_number(&acorigin, 0);
	set_account_name(&acorigin, "Jack");
	set_account_wallet(&acorigin, 99999);
	//print the account
	printf("Account Number: %d\n", get_account_number(&acorigin));
	printf("Account Name: %s\n", get_account_name(&acorigin));
	printf("Account Wallet: %d\n", get_account_wallet(&acorigin));

	return 0;
}
