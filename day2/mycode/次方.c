/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 19:00
	Description: ���� X��n�η�����õ��Ľ���ĺ���λ��
*/
#include <stdio.h>
int main(){
	int x;
	int t;
	scanf("%d",&x);
	t=x;
	int n;
	scanf("%d",&n);
	for(;n>1;n--){
		x=x*t;
	}
	int a=x%10;
	int b=(x/10)%10;
	int c=(x/100)%10;
	
	printf("���Ϊ��%d\n",x);
	printf("����λΪ��%d��%d��%d",c,b,a);
	return 0;
}

