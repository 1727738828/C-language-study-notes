/*
	Name: 
	Copyright: 
	Author: 
	Date: 27/08/18 18:42
	Description: 输入一个三位数如：456，将其倒着输出输出后为654
*/


#include <stdio.h>

int main(){
	printf("请输入一个三位数：\n");
	int a,b,c;
	scanf("%1d%1d%1d",&a,&b,&c);
	printf("倒序：%d%d%d",c,b,a);
	
	
	return 0;
}
