#include "Q3.h"
int findSpaceCount(char *ptr){
	int count=0,i=0;
	while(ptr[i]){
		if(ptr[i]==' ')
			count++;
		i++;		
	}
	
	return count;
}
int findLength(char *a){
	int len=0;
	while(a[len++]);
	
	return len-1;
}
void replaceWith20(char *a,int len,int extraSpace){
		
	int i=len-1,j= len+extraSpace;
	a[j--]='\0';
	
	while(i>=0){
		
		if(a[i]==' '){
			a[j]='0';
			a[j-1]='2';
			a[j-2]='%';
			j-=3;
			i--;
		}
		else{
			a[j]=a[i];
			i--; j--;
		}		
		
	}
	
	
}
