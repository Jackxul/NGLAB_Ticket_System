/* map.c */
#include "map.h"
//Train Station Map File in C
/* charge fee table
 * <5   	20$
 * 5~8 		25$
 * 8~11 	30$
 * 11~14 	35$
 * 14~17 	40$
 * 17~20 	45$
 * 20~23 	50$
 * 23~26 	55$
 * 26~31 	60$
 * >31 		65$
 */
//calculate fee
//Need to be modified

//value
//0 : BR
//1 : BL
//2 : G
//3 : O
//4 : R

//1 for O11,R13
//2 for G14,R11
//3 for G15,O08
//4 for BL11,G12
//5 for BL12,R10
//6 for G10,R08
//7 for G16,BR11
//8 for BL14,O07
//9 for R07,O06
//10 for G09,O05
//11 for BL15,BR10
//12 for R05,BR09
const int tran [12][13] = {
	/* 0*///0  1  2  3  4  5  6  7  8  9 10 11 12 
	/* 1*/{-1,-1, 2, 3,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	/* 2*/{-1, 2,-1, 1, 2, 1,-1,-1,-1,-1,-1,-1,-1},
	/* 3*/{-1, 3, 1,-1,-1,-1,-1, 1, 1,-1,-1,-1,-1},
	/* 4*/{-1,-1, 2,-1,-1, 1, 2,-1,-1,-1,-1,-1,-1},
	/* 5*/{-1,-1, 1,-1, 1,-1, 2,-1, 2,-1,-1,-1,-1},
	/* 6*/{-1,-1,-1,-1, 2, 2,-1,-1,-1, 1, 1,-1,-1},
	/* 7*/{-1,-1,-1, 1,-1,-1,-1,-1,-1,-1,-1, 1,-1},
	/* 8*/{-1,-1,-1, 1,-1, 2,-1,-1,-1, 1,-1, 1,-1},
	/* 9*/{-1,-1,-1,-1,-1,-1, 1,-1, 1,-1, 1,-1, 2},
	/*10*/{-1,-1,-1,-1,-1,-1, 1,-1,-1, 1,-1,-1,-1},
	/*11*/{-1,-1,-1,-1,-1,-1,-1, 1, 1,-1,-1,-1, 1},
	/*12*/{-1,-1,-1,-1,-1,-1,-1,-1,-1, 2,-1, 1,-1}
};

const int trans_BR[4][2] = {{9,405},{10,115},{11,216},{24,123}};
const int trans_BL[5][2] = {{111,212},{112,410},{114,307},{115,10},{123,24}};
const int trans_G[6][2] = {{209,305},{210,408},{212,111},{214,411},{215,308},{216,11}};
const int trans_O[5][2] = {{305,209},{306,407},{307,114},{308,215},{311,413}};
const int trans_R[6][2] = {{407,306},{408,210},{410,112},{411,214},{413,311},{405,9}};
int  stat_cal(char *in_stat , int in_no , char *out_stat , int out_no){
	int fee =0;
	printf("in_stat = %c -> ",*in_stat);
	printf("%d\n",in_no);
	printf("out_stat = %c -> ",*out_stat);
	printf("%d\n",out_no);
/* ALGO */
 	int in_num = 318;
	int out_num = 12;
	int count_cal = 0;
	int total_dis = 0;
	fee = route_cal(in_num,out_num,total_dis,count_cal);
		
	return fee;
}

int route_cal(int in_stat , int out_stat, int distance , int count){
	int in_color = in_stat/100;
	int out_color = out_stat/100;
	bool flag = true;
	int prv_dis = distance;
	switch(in_color){
		case 0 :
			if(out_color == in_color){
				distance += abs(in_stat - out_stat);
			}
			else{
				int min = 9999;
				count++;
				if(count > 3){
					flag = false;
					count --;
				}
				if(flag){
					for(int i=0 ;i < sizeof(trans_BR)/sizeof(trans_BR[0]);i++){
					    distance = prv_dis;
						int trans_dis = abs(in_stat - trans_BR[i][0]);
						distance += trans_dis;
						distance = route_cal(trans_BR[i][1],out_stat,distance,count);
						flag = true;
						if(distance < min){
							min = distance;
						}
					}
				}
				distance = min;
			}
			break;
		case 1 :
			if(out_color == in_color){
				distance += abs(in_stat - out_stat);
			}
			else{
				int min = 9999;
				count++;
				if(count > 3){
					flag = false;
					count --;
				}
				if(flag){
					for(int i=0 ;i < sizeof(trans_BL)/sizeof(trans_BL[0]);i++){
					        distance = prv_dis;
						int trans_dis = abs(in_stat - trans_BL[i][0]);
						distance += trans_dis;
						distance = route_cal(trans_BL[i][1],out_stat,distance,count);
						flag = true;
						if(distance < min){
							min = distance;
						}
					}
				}
				distance = min;

			}
			break;
		case 2 :
			if(out_color == in_color){
				distance += abs(in_stat - out_stat);
			}
			else{
				int min = 9999;
				count++;
				if(count > 3){
					flag = false;
					count --;
				}
				if(flag){
					for(int i=0 ;i < sizeof(trans_G)/sizeof(trans_G[0]);i++){
					    distance = prv_dis;
						int trans_dis = abs(in_stat - trans_G[i][0]);
						distance += trans_dis;
						distance = route_cal(trans_G[i][1],out_stat,distance,count);
						flag = true;
						if(distance < min){
							min = distance;
						}
					}
				}
				distance = min;
			}
			break;

		case 3 :
			if(out_color == in_color){
				distance += abs(in_stat - out_stat);
			}
			else{
				int min = 9999;
				count++;
				if(count > 3){
					flag = false;
					count --;
				}
				if(flag){
					for(int i=0 ;i < sizeof(trans_O)/sizeof(trans_O[0]);i++){
					    distance = prv_dis;
						int trans_dis = abs(in_stat - trans_O[i][0]);
						distance += trans_dis;
						distance = route_cal(trans_O[i][1],out_stat,distance,count);
						flag = true;
						if(distance < min){
							min = distance;
						}
					}
				}
				distance = min;

			}
			break;

		case 4 :
			if(out_color == in_color){
				distance += abs(in_stat - out_stat);
			}
			else{
				int min = 9999;
				count++;
				if(count > 3){
					flag = false;
					count --;
				}
				if(flag){
					for(int i=0 ;i < sizeof(trans_R)/sizeof(trans_R[0]);i++){
					    distance = prv_dis;
						int trans_dis = abs(in_stat - trans_R[i][0]);
						distance += trans_dis;
						distance = route_cal(trans_R[i][1],out_stat,distance,count);
						flag = true;

						if(distance < min){
							min = distance;
						}
					}
				}
				distance = min;

			}
			break;
		default:
			break;
	}
	return distance;
}

void map(){






}
