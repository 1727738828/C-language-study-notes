/*
	Name: 
	Copyright: 
	Author: 
	Date: 27/08/18 21:03
	Description: 用switch写一个加油站加油的表，如输入A时表示加93号汽油，并且输出其价格
*/


#include <stdio.h>
int main() {
	char type;
	scanf("%c",&type);
	switch(type){
		case 'A':printf("93号汽油，单价7.16元/升"); break; 
		case 'B':printf("90号汽油，单价6.71元/升"); break; 
		case 'C':printf("97号汽油，单价7.71元/升"); break; 
		case 'D':printf(" 0号柴油，单价6.85元/升"); break; 
	} 
}


