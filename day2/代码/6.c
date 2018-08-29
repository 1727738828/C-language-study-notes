/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月28日 星期二 11时46分52秒
 ************************************************************************/
#include<stdio.h>

int main()
{
    char a[] = {'c','c','f','g','v'};
    char b[] = "hello";
    char c[12] = "hello";
    char d[6] = "world";
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%s\n",c);  //数组名代表整个数组的首地址 
    char q[10];

    int i = 0;
    while(c[i] != '\0'){
        q[i] = a[i];
        i++;
    }
    i = 0;

    while(c[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while(d[j] != '\0'){
        c[i+j] = d[j];
        j++;
    }
    printf("%s\n",c);
    
    return 0;
}
