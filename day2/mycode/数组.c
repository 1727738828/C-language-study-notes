/*
	Name:
	Copyright:
	Author:
	Date: 28/08/18 11:19
	Description: สýื้
*/


#include<stdio.h>

int main() {
	int a[]= {1,2,3,4,5,6,7,8,9,0};
	int i,t;
	for(i=0;i<10/2;i++){
		t=a[i];
		a[i]=a[9-i];
		a[9-i]=t;
	}
	for(i=0; i<10; i++)
		printf("%d ",a[i]);
	return 0;
}
