/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 17:21
	Description: �����һ��������ƻ�����ڶ�������һ���2����һ����
	�Դ����ƶ�����������������100����������
*/
#include <stdio.h>

int main(){
	int i,num=2,n=100;
	for(i=1;num<n;i++){
		num=num*2+1;		
	} 
	printf("%d�죬����Ϊ%d",i-1,(num-1)/2);
	return 0;
}

