/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月29日 星期三 14时47分11秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char a[20] = {0};
    char b[20] = {0};
    char *p = "helloworld";
   /* char *q = a;
    while(*q != '\0'){
        q++;
    }
    while(*q++ = *p++);*/
    /*
    *while(*p != '\'){
        *q = *p;
        q++;
        p++;
    }
    * */
    scanf("%s%s",a,b);
   // gets("a");
    printf("%s\n",a);
    return 0;
}
