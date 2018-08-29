/*
	Name:
	Copyright:
	Author:
	Date: 27/08/18 19:37
	Description: 输入三个数把这三个数由大到小输出
*/

#include <stdio.h>
int main() {
	printf("请输入三个数：\n");
	int x,y,z,temp;
	scanf("%d %d %d",&x,&y,&z);
	if(x<y) {
		temp=x;
		x=y;
		y=temp;
	}
	if(x<z) {
		temp=x;
		x=z;
		z=temp;
	}
	if(y<z) {
		temp=y;
		y=z;
		z=temp;
	}
	printf("由大到小输出: %d,%d,%d\n",x,y,z);
	
	
}

