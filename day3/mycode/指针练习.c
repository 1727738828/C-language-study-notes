/*
	Name: 
	Copyright: 
	Author: 
	Date: 29/08/18 09:27
	Description: ָ����ϰ 
*/
#include <stdio.h>

int main(){
	int a;
	
	int *p = &a;
	
	a=5;//�ȼ���*p=5;
	*p=10; 
	printf("%d\n",*p);//10
	printf("%d",a);//10ָ���ֵ�ı�   ��ַ��ֵ�͸ı� 
	
	int b[10] = {1,6,9,8,7,4,5,3,0,2};
	int *s=b;
	int *d=&b[7];
	
	printf("d-s=%d\n",d-s);
	
	printf("(int)d-(int)s=%d\n",(int)d-(int)s);
	
	printf("%p\n",s);
	printf("%p\n",d);
	
	
	
	
	
	
	
	return 0;
}

