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
	char in_color[10];
	char out_color[10];
	int in_number;
	int out_number;
	time_t time;
	char PSK[10];
	bool lock;
	pthread_mutex_t mutex;
} ST = {
	"NULL",
	"NULL",
	0,
	0,
	0,
	"NGLAB_2023",
	0,
	PTHREAD_MUTEX_INITIALIZER
};


bool station_login(char *PSK);//for login to set station setting
void *set_station(char *color , int num , char *color2 , int num2);//for set station setting
void check_remain(Acc *account);//for check account remain >= 0

#endif /* STATION_H */ 
