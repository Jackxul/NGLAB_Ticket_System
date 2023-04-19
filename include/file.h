//file.h
#ifndef _FILE_H_
#define _FILE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fileprint(int *fileno){
	char path[20];
	bool flag = false;
	char line[100];
	char *field;
	int field_count = 0;
	sprintf(path,".data/%d.csv",*filno);
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

			field = strtok(line,',');
			while(field){
				printf("%s   ",field);
				field = strtok(NULL, ',');
			}
		}else{
			printf("%s \n",line);
		}
//				printf("---------------|");
//			printf("---------------|");
	
		field_count++;



	}
	
	fclose(fp);
}








#endif /*FILE_H*/
