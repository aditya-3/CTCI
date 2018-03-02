
#include"Q4.h"

void main(){
	int i=0,len;
	char *a;
	a=(char *)calloc(100,sizeof(char));
	scanf("%[^\n]%*c",a);
	len=findLength(a);
	a=realloc(a,len);
	isPalindrome(a)?printf("true"):printf("false");
		
}
