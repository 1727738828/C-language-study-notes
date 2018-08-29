/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 19:00
	Description: 输入 X的n次方输出得到的结果的后三位数
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
	
	printf("结果为：%d\n",x);
	printf("后三位为：%d、%d、%d",c,b,a);
	return 0;
}

