//file.h
#ifndef _FILE_H_
#define _FILE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#include "account.h"

int create_info_text(){
	int fileno = 0;
	char path[20];
	bool flag = true;
	while(flag){
		sprintf(path, ".data/%d.csv", fileno);
		if(access(path, F_OK) == 0){
			//printf("Error: info.txt already exists!\n");
			fileno++;
			continue;
		}else{
			
			//doen't exist
			FILE *fp = fopen(path, "w");
			if(fp != NULL){
				fprintf(fp, "index,AccountID,AccountName,Wallet,In_Colo,In_no,Out_Colo,Out_no,Lock\n");
				fclose(fp);
			}else{
				printf("Error: .txt open failed!\n");
			}
			flag = false;
		}

	}
	printf("Thanks for your purchase !\nYour Account ID is : %d  ", fileno);
return fileno;
}

void filewrite(int fileno, char type, int wallet, char *incolo, int inno, char *outcolo, int outno){   // replacement function (set default to no replace)
	Acc *account = (Acc *)malloc(sizeof(Acc));
	


	account->accountNumber = fileno;
//	strncpy(account->name ,"NULL" , 5);
	if(!wallet)
		printf("1");//do_nothing	
	else
		account->wallet = wallet;	
	
	if(strncmp(incolo, "NULL", 4) == 0)
		printf("2");//do_nothing	
	else
		strncpy(account->station_in_color, incolo, 3);
	
	if(!inno)
		printf("3");//do_nothing	
	else
		account->station_in_number = inno;
	if(strncmp(outcolo, "NULL", 4) == 0)
		printf("4");//do_nothing	
	else
		strncpy(account->station_out_color, outcolo, 3);
	if(!outno)
		printf("5");//do_nothing	
	else
		account->station_out_number = outno;
	if(account->lock == 1 && account->wallet < 0)
		printf("6");//do_nothing	
	else
		account->lock = 0;




	account->accountNumber = fileno;
	strncpy(account->name ,"NULL" , 5);
	account->wallet = wallet;
	strncpy(account->station_in_color, incolo, 3);
	account->station_in_number = inno;
	strncpy(account->station_out_color, outcolo, 3);
	account->station_out_number = outno;
	//account->lock = lock;

	
	char path[20];
	sprintf(path, ".data/%d.csv", fileno);
	FILE *fp = fopen(path, "a");
	if(fp != NULL){
		fprintf(fp, "%c,%d,%s,%d,%s,%d,%s,%d,%d\n",
				'I',
				fileno,
				account->name,
				account->wallet,
				account->station_in_color,
				account->station_in_number,
				account->station_out_color,
				account->station_out_number,
				account->lock);
		fclose(fp);
	}else{
		printf("Error: .txt open failed!\n");
	}

	


	free(account);
}
void fileprint(int *fileno){
	char path[20];
	char line[100];
	char *field;
	char *comma = ",";
	int field_count = 0 , column_count = 0;
	sprintf(path,".data/%d.csv",*fileno);
	FILE *fp = fopen(path, "r");
	if(fp != NULL){
	//open success
		//prtintf("File Open Success\n");
	}else{
	//failed
		printf("File Open Error\n");
	}
	while(fgets(line , 100 , fp)){
		if(field_count == 0){
	
		column_count --;
		}
		line[strcspn(line, "\n")] = '\0';
			field = strtok(line,comma);
			while(field){
				printf("|%-12s",field);
				field = strtok(NULL, comma);
				column_count++;
			}
			printf("|\n ");
			do{
				printf("%-13s","------------");
			}while(column_count--);
			printf("\n");
		field_count++;



	}
	
	fclose(fp);
}
//item rule
//0 : index
//1 : Account ID
//2 : Account Name
//3 : Wallet
//4 : In_Colo
//5 : In_no
//6 : Out_Colo
//7 : Out_no
//8 : Lock
char *itemprint(int *fileno , int num){
	char path[20];
	char line[100];
	char *field = "";
	char *comma = ",";
	int column_count = 0;
	long file_size;
	sprintf(path,".data/%d.csv",*fileno);
	FILE *fp = fopen(path, "r");
	if(fp != NULL){
	//open success
	}else{
	//failed
		printf("File Open Error\n");
	}
	fseek(fp, 0, SEEK_END); 
	//file pointer
	//offset
	//position (SEEK_SET, SEEK_CUR, SEEK_END)
	file_size = ftell(fp);
	file_size = ftell(fp); // return the current position of the file pointer -> to determine the file size
	rewind(fp); // set the file pointer to the beginning of the file

	while(fgets(line , 100 , fp)){
		if(ftell(fp) == file_size){
			break;
		}
	}
	char *last = line;
	//printf("Last line\n%s",last);
	fclose(fp);
	//printf("\nNumbers = %d \n",num);


	field = strtok(last,comma);
	while(field && num > 0){
		num--;
		field = strtok(NULL, comma);
	}
	//printf("Field = %s\n",field);
	return field;	
}







#endif /*FILE_H*/
