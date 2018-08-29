/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月27日 星期一 16时12分28秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    switch(c){
        case '+':printf("%d + %d = %d\n",a,b,a+b);break;

        case '-':printf("a - b = %d\n",a-b);break;

        case '*':printf("a * b = %d\n",a*b);break;

        case '/':printf("a / b = %d\n",a/b);break;

        case '%':printf("a %% b = %d\n",a%b);break;

        default:printf("input error\n");
    }
    return 0;
}
