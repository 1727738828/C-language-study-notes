/*
	Name:
	Copyright:
	Author:
	Date: 27/08/18 20:39
	Description: 输入一个字母判断是否为大写
*/

#include <stdio.h>
int main() {
	char a;
	scanf("%c",&a);
	if(a>= 'A' && a<= 'Z') {
		printf("输入数据为大写字母");
	} else {
		printf("输入数据不是大写字母");
	}
}

