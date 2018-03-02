#include "Q4.h"
int findLength(char *a){
	int len=0;
	while(a[len++]);
	
	return len-1;
}
int isPalindrome(char *a){
	
	int i,val, checkBit=0;
	for(i=0;a[i];i++){
		if(a[i]!=' '){
			val=a[i]-'a';
			checkBit^=(1<<val);
		}
	
	}
	if(checkBit&(checkBit-1))
		return 0;
	else
		return 1;
}
