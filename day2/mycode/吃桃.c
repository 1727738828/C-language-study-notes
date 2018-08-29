/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 16:37
	Description: 猴子摘了N个桃子，第一天吃掉一半后还不过瘾于是又吃掉一个，
	第二天又吃掉剩下的一半又多一个到第十天想吃时却发现只有一个桃子了
	问猴子总共摘了多少个?
*/


#include <stdio.h>
int main(){
int num=1,i,n=10;
 
    for(i=1;i<n;i++){
        num=(num+1)*2;
    }
 
    printf("%d",num);	
	
	
	return 0;
}


