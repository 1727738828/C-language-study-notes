/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月28日 星期二 14时46分12秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char a[20] = "aaaabbbbbccc";
    char b[10] = {0},i = 1,j = 0;
    b[0] = a[0];
    while(a[i] != '\0'){
        if(a[i] != b[j]){
            b[j+1] = a[i];
            j++;
        }
        i++;
    }
    printf("%s\n",b);
    return 0;
}
