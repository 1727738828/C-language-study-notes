/*
	Name:
	Copyright:
	Author:
	Date: 27/08/18 18:46
	Description: 输入两个数 m 和 n  求最大公约数和最小公倍数
*/

#include <stdio.h>
int main() {
	int m,n,i;
	printf("请输入n：\n");

	scanf("%d",&m);
	printf("请输入m：\n");
	scanf("%d",&n);
	for(i=m; i>=1; i--) {
		if(m%i==0 && n%i==0) {
			break;
		}
	}
	//最小公倍数等于两数之积除以其最大公约数
	int c=(m*n)/i;
	printf("最大公约数=%d\n",i);
	printf("最小公倍数=%d\n",c);

	return 0;
}
