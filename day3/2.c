/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月29日 星期三 10时13分29秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a[10] = {1,6,9,8,7,4,5,3,0,2};
    int *p = a;
    int *q = &a[7];

    printf("q-p = %d\n",q-p);
    printf("(int)q - (int)p = %d\n",(int)q-(int)p);
    printf("%p\n",p);
    printf("%p\n",q);

    printf("%d\n",p[2]);   //9


    printf("%d\n",*(p+3)); //8 
    printf("%d\n",*(a+3)); //8
    printf("%d\n",*(p++)); //1  *(a++) 数组名是常量不能自加
    printf("%d\n",*(++p)); //9
    printf("%d\n",(*p)+1); //10
    printf("%d\n",*p++);   //9
    printf("%d\n",p[2]);   //4


    return 0;
}
