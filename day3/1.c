/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月29日 星期三 09时35分33秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int *s = NULL; //空指针，不让 s 指向任何一片空间
    int *p,*q;  
    int a;
    p = &a;
    *p = 6;
    
    //*q = 9;  //对野指针操作会出现 段错误（对内存操作出错） 
    q = p; // q  = &a;

    printf("%d\n",*p);
    printf("%d\n",*p);

    return 0;
}
