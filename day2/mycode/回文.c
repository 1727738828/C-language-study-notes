/*
	Name:
	Copyright:
	Author:
	Date: 28/08/18 19:00
	Description: �ж�1000���ڵĻ����������Ҵ�ӡ����
*/
#include <stdio.h>
int main() {
	int i;
	for(i=11; i<100; i++) {
		if(i%10==(i/10)%10) {
			printf("���Ϊ��%d\n",i);
		}
	}
	for(i=101; i<1000; i++) {
		if(i%10==(i/100)%10) {
			printf("���Ϊ��%d\n",i);
		}
	}
	
	return 0;
}

