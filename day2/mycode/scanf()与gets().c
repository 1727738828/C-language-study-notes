/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 16:21
	Description: 分别用scanf和gets输入字符串，然后分别用puts和printf打印出来
*/
#include <stdio.h>
int main() {
//	printf("请输入一个字符：\n");
//	char a;
//	scanf("%c",&a);
//	printf("%c\n",a);


	printf("请输入一个字符：\n");
	char b[10];
	gets(b);
	puts(b);	
	return 0;
}
