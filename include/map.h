/* map.h */
#ifndef MAP_H
#define MAP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//declare the prototypes of functions
int  stat_cal(char *in_stat , int in_no , char *out_stat , int out_no);

int route_cal(int in_stat , int out_stat, int distance , int count);

int stat_trans(char *stat , int num);

#endif /* MAP_H */ 
