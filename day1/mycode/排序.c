/*
	Name:
	Copyright:
	Author:
	Date: 27/08/18 19:37
	Description: ���������������������ɴ�С���
*/

#include <stdio.h>
int main() {
	printf("��������������\n");
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
	printf("�ɴ�С���: %d,%d,%d\n",x,y,z);
	
	
}

