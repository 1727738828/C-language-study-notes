/*
	Name: 
	Copyright: 
	Author: 
	Date: 27/08/18 17:02
	Description: 求 1 到  100 之间所有的偶数并且打印出来
*/

#include <stdio.h>

int main(){
	int i;
	for(i=1;i<=100;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	
	
	
	return 0;
}

