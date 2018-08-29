/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月27日 星期一 15时47分00秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a > b){
        if(a > c){
            printf("the max is %d\n",a);
        }else{
            printf("the max is %d\n",c);
        }
    }else{
        if(b > c){
            printf("the max is %d\n",b);
        }else{
            printf("the max is %d\n",c);
        }
    }
    
/*
    int max;
    max = (a>b)?a:b;
    max = (max>c)?max:c;
    printf("the max is %d\n",max);
*/
    return 0;
}
