/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月29日 星期三 11时13分28秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a[10] = {9,52,16,34,86,112,13,63,52,32};
    int max = 0,*p = a;
    int n = 10;
    while(n--){
        if(max < *p){
            max = *p;
        }
        p++;
    }
    
    printf("%d\n",max);
    return 0;
}