/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 16:54
	Description: 有一组分数序列：2/1 ， 3/2， 5/3， 8/5 ，13/8 ，21/13.............求这个序列的前20项和
*/
#include <stdio.h>

int main(){
	float a,b,c,i,sum=0;
	a=2;
	b=1;
	for(i=0;i<20;i++){
		sum+=a/b;
		c=a;
		a=a+b;
		b=c;
	} 
	printf("%f",sum);
	
	 
	return 0;
}

