/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/08/18 18:17
	Description:�ܹ���1020��ƻ������һ������һ���ֶ�1�����Դ����ƶ����������� 
*/
#include <stdio.h>

int main(){
	int n=1020;
	int i=1;
	for (i=1;n>0;i++){
		n=n/2-2;
	}
	 printf("%d��",i-1); 
	return 0;
}

