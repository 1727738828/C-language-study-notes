/*
	Name:
	Copyright:
	Author:
	Date: 28/08/18 10:23
	Description: 输出等腰三角形printf
*/
#include <stdio.h>

int main() {
	int i;
	int n;
	int j;

	printf("请输入层数");
	scanf("%d",&n);
	for(i=1; i<n+1; i++) {
		for(j=0; j<n-i; j++) {
			putchar(' ');
		}
		for(j=0; j<2*i-1; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	for(i=n; i>1; i--) {
		for(j=n-i; j>=0; j--) {
			putchar(' ');
		}
		for(j=2*i-1; j>2; j--) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
