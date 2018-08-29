/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 17:21
	Description: 假如第一天卖两个苹果，第二天卖第一天的2倍多一个，
	以此类推多少天能卖到不超过100个的最大个数
*/
#include <stdio.h>

int main(){
	int i,num=2,n=100;
	for(i=1;num<n;i++){
		num=num*2+1;		
	} 
	printf("%d天，个数为%d",i-1,(num-1)/2);
	return 0;
}

