//station.h
#ifndef STATION_H
#define STATION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include <stdbool.h>
#include "account.h"
//for both
//Need to be modify
static struct station{
	char color[10];
	int number;
	time_t time;
	char PSK[10];
	bool lock;
	pthread_mutex_t mutex;
} ST = {
	"NULL",
	1,
	0,
	"NGLAB_2023",
	0,
	PTHREAD_MUTEX_INITIALIZER
};


void *station_login(char *PSK);

void check_remain(Acc *account);
//for in
char set_station_in_color(Acc *account , char *color); 
int set_station_in_number(Acc *account , int num);
//for out
char set_station_out_color(Acc *account , char *color); 
int set_station_out_number(Acc *account , int num);

#endif /* STATION_H */ 
