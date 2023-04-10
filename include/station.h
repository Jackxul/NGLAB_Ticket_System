//station.h
#ifndef STATION_H
#define STATION_H

#include <stdio.h>
#include <stdlib.h>
#include "account.h"
//for both
void check_remain(Acc *account);
//for in
char set_station_in_color(Acc *account , char *color); 
int set_station_in_no(Acc *account , int num);
//for out
char set_station_out_color(Acc *account , char *color); 
int set_station_out_no(Acc *account , int num);

#endif /* STATION_H */
