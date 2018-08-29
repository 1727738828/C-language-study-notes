/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月27日 星期一 15时40分30秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a,b,d;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    if(c == '+'){
        d = a + b;
        printf("%d\n",d);
    }else if(c == '-'){
        d = a - b;
        printf("%d\n",d);
    }else if(c == '*'){
        d = a * b;
        printf("%d\n",d);
    }else if(c == '/'){
        d = a / b;
        printf("%d\n",d);
    }else if(c == '%'){
        d = a % b;
        printf("%d\n",d);
    }else{
        printf("input error\n");
    }
    return 0;
}
