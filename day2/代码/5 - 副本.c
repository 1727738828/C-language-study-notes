/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月28日 星期二 11时30分34秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b = 10/2,i = 0,j = 9;
    while(b != 0){        // j > i;
        a[i] = a[i]^a[j]; //a[i]^=a[j];
        a[j] = a[j]^a[i]; //a[j]^=a[i];
        a[i] = a[i]^a[j]; //a[i]^=a[j];
        i++;
        j--;
        b--;
    }

    for(b = 0;b < 10;b++){
        printf("%d\n",a[b]);
    }
    return 0;
}
