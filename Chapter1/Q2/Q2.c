
#include"Q1.h"

void main(){
	int flag,i=0,len1,len2;
	char *a,*b;
	a=(char *)calloc(100,sizeof(char));
	scanf("%s",a);
	b=(char *)calloc(100,sizeof(char));
	scanf("%s",b);
	len1=findLength(a);
	len2=findLength(b);
	if(len1==len2){
		a=realloc(a,len1);	
		b=realloc(b,len2);
		flag=checkPermutation(a,b);
	
		if(flag)
			printf("Permutation\n");
		else
			printf("Not a permutation");
	}
	else
		printf("not a permutaion");
		
}
