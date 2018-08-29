/*
	Name: 
	Copyright: 
	Author: 
	Date: 29/08/18 11:31
	Description: 
*/
#include <stdio.h>

int main(){
	char a[10]="hello";
	char *q=a;
	char *p=a; 
	while(*p!='\0'){
		p++;
	}
	p--;
	while(q<p){
		*q^=*p;
		*p^=*q;
		*q^=*p;
		q++;
		p--;
	}
	char *t=a;
	printf("%s\n",t);
	return 0;
}

