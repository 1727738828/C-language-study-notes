/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 18:43
	Description: 输入一个数N 计算它的阶乘
*/
#include <stdio.h>

int main(){
	printf("请输入一个数：");
	int num;
	scanf("%d",&num); 
	int i;
	for (i=num;i>1;i--){
		num=num*(i-1);
	}
	printf("%d",num);
	return 0;
}

