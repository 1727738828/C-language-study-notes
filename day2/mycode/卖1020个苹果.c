/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 18:17
	Description:总共有1020个苹果，第一天卖掉一半又多1个，以此类推多少天能卖完 
*/
#include <stdio.h>

int main(){
	int n=1020;
	int i=1;
	for (i=1;n>0;i++){
		n=n/2-2;
	}
	 printf("%d天",i-1); 
	return 0;
}

