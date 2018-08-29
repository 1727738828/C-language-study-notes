/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月27日 星期一 11时44分27秒
 ************************************************************************/

#include<stdio.h>
#define M(a,b) (a>b)?a:b

int main()
{
    char a = '9';   //57
    char b = 'a';   //97
    char c = 'A';   //65
    c = M(a,b); // c = (a>b)?a:b;

    printf("%d\n",sizeof(int));

    printf("'9' = %d\n",M); //57
    printf("'a' = %d\n",b); //97
    printf("'c' = %d\n",c); //65
    return 0;
}
