/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月28日 星期二 10时28分56秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n = 7,i = 1,j;
    for(i = 1;i < 6;i++){
        for(j=1;j<=n-i;j++){
            putchar(' ');
        }
        for(j=1;j<=2*i-1;j++){
            putchar('*');
        }
        putchar('\n');
    }
    n = 6;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            putchar(' ');
        }
        for(j=1;j<=2*(n-i)+1;j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
