#include "Q2.h"
int checkValue(char *ptr){
	int val,check=0,i=0;
	while(ptr[i]){
		val=ptr[i];
		check^=(1 << val);
		i++;		
	}
	return check;
}
int findLength(char *a){
	int len=0;
	while(a[len++]);

	return len;
}
int checkPermutation(char *a,char *b){
		
	if(checkValue(a)==checkValue(b))
		return 1;	
	else
		return 0;
}
