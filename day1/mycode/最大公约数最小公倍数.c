/*
	Name:
	Copyright:
	Author:
	Date: 27/08/18 18:46
	Description: ���������� m �� n  �����Լ������С������
*/

#include <stdio.h>
int main() {
	int m,n,i;
	printf("������n��\n");

	scanf("%d",&m);
	printf("������m��\n");
	scanf("%d",&n);
	for(i=m; i>=1; i--) {
		if(m%i==0 && n%i==0) {
			break;
		}
	}
	//��С��������������֮�����������Լ��
	int c=(m*n)/i;
	printf("���Լ��=%d\n",i);
	printf("��С������=%d\n",c);

	return 0;
}
