/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 18:43
	Description: ����һ����N �������Ľ׳�
*/
#include <stdio.h>

int main(){
	printf("������һ������");
	int num;
	scanf("%d",&num); 
	int i;
	for (i=num;i>1;i--){
		num=num*(i-1);
	}
	printf("%d",num);
	return 0;
}

