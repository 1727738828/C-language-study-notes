/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 09:42
	Description: 
*/


#include <stdio.h>

int main(){
	
	float a,b,c,i,temp=0;
	a=2;
	b=1;
	
	for(i=0;i<20;i++){
		temp=temp+a/b;
		c=a;
		a=a+b;	
		b=c;
	}
	
	printf("%f",temp);
	
	return 0;
} 
