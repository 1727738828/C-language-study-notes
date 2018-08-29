/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月29日 星期三 14时15分08秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char a[20] = "world";
    char *p = "helloword";

    char *q = a;

    char *z = p;
    
    while(*p != '\0'){ //while(*p);
        *q = *p;
        q++;
        p++;
    }

    //while(*q++ = *p++);
    int len = 0;
    while(*z != '\0'){
        len++;
    }
    printf("%d\n",len);

    

    return 0;
}
