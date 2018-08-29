/*
	Name:
	Copyright:
	Author:
	Date: 28/08/18 15:44
	Description: 输入一个字符分别以十进制，十六进制，八进制输出。
*/


#include <stdio.h>
int main() {
	printf("请输入一个字符：\n");
	char a;
	scanf("%s",&a);
	printf("d=%d o=%o x=%x\n",a,a,a);	
	return 0;
}
