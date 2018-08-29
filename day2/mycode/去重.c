/*
	Name:
	Copyright:
	Author:
	Date: 28/08/18 14:29
	Description: ×Ö·û´®È¥ÖØ
*/


#include <stdio.h>

int main() {

	char a[11]= {"accddaaffs"};
	char b[15]={};
//	char b[10]= {a[0]};
	int i=0,k=0;
	int flag;
	int j;
	while(i<11) {
		flag=0;
		for(j=0; j<k; j++) {
			if(a[i]==b[j]) {
				flag=1;
			}		
		}
		if(flag==0) {
				b[k++]=a[i];
			} 
		i++;
	}
	printf("%s\n",b);
    
	return 0;
}
