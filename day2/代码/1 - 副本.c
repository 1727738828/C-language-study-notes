/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月28日 星期二 09时37分16秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    float a = 2,b = 1,num = 0,c;
    int i = 0;
    for(i = 0;i < 20;i++){
        num = num + a/b;
        c = a;
        a = a + b;
        b = c;
    }
    printf("num = %f\n",num);
    return 0;
}
