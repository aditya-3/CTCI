#include "Q1.h"
int findLength(char *a){
	int len=0;
	while(a[len++]);

	return len;
}
int findUnique(char *a,int len){
	int *check;
	int i=0,n;
	check=(int  *)calloc(128,sizeof(int));
	while(i!=len){
		n=a[i];
		if(check[n])
			return 0;
		else
			check[n]=1;
		i++;
	}
	return 1;	
}
