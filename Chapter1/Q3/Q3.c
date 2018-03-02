
#include"Q3.h"

void main(){
	int i=0,len,spaceCount=0;
	char *a;
	a=(char *)calloc(100,sizeof(char));
	scanf("%[^\n]%*c",a);
	
	len=findLength(a);
	spaceCount=findSpaceCount(a);
	a=realloc(a,(len+(spaceCount*2)+1));
	replaceWith20(a,len,(spaceCount*2));
	printf("\n%s\n",a);	
		
		
}
