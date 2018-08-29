/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月29日 星期三 10时54分05秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    const int a = 5;
   // a = 6;
    int b,m;
    const int *p = &b;
   // *p = 5;
    p = &m;
    int * const q = &b;
    //q = &m;
    *q = 6;
    const int *const z = &b;
    //z = &m;
    //*z = 9;
    return 0;
}
