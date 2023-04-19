//file.h
#ifndef _FILE_H_
#define _FILE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
		flag = true;	
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

int itemprint(int *fileno , int num){
	char path[20];
	char line[100];
	char *field;
	char *comma = ",";
	int column_count = 0;
	long file_size;
	sprintf(path,".data/%d.csv",*fileno);
	FILE *fp = fopen(path, "r");
	if(fp != NULL){
	//open success
		flag = true;	
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


//	while(fgets(line , 100 , fp)){
//		if(field_count == 0){
//			column_count --;
//		}
//		line[strcspn(line, "\n")] = '\0';
//			field = strtok(line,comma);
//			while(field){
//				printf("|%-12s",field);
//				field = strtok(NULL, comma);
//				column_count++;
//			}
//			printf("|\n ");
//			do{
//				printf("%-13s","------------");
//			}while(column_count--);
//			printf("\n");
//		field_count++;
//	}
}







#endif /*FILE_H*/
