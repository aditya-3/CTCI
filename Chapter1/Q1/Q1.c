
#include"Q1.h"
//#include"implement.c"
void main(){
	int flag,i=0,len;
	char *a;
	a=(char *)calloc(100,sizeof(char));
	scanf("%s",a);
	len=findLength(a);
	printf("\n lenght=%d\n",len);
	a=realloc(a,len);
	flag=findUnique(a,len);
	if(!flag)
		printf("Not Unique\n");
	else
		printf("Unique");
		
}
