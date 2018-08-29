/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月29日 星期三 11时19分57秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char *q = "hello";
    char a[10] = "hello";
    //*q = 'p';


    printf("%s\n",q);
    printf("%s\n",q++);
    printf("%s\n",++q);
    printf("%c\n",*(q+2));
    return 0;
}
