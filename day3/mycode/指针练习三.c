/*
	Name:
	Copyright:
	Author:
	Date: 29/08/18 14:24
	Description:
*/
#include <stdio.h>

int main() {
	char a[20]="world";
	char *p="helloworld";
	char *q=a;

	char *z=p;

	int len=0;
	while(*z!='\0') {
		len++;
		z++;
	}

	while(*q!='\0') {//��ָ���Ƶ�ĩβ
		q++;
	}
	//while(*q++=*p++);//��p  ���ӵ�q  ����
	while(*p!='\0') {
		*q=*p;
		q++;
		p++;
	}

	printf("%s",a);
	return 0;
}

