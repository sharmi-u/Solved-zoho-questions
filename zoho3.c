#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i,len;
	char c[200];
	gets(c);
	len=strlen(c);
	for(i=0;i<len;i++){
			if(c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u' && c[i] != 'A' && c[i] != 'E' && c[i] != 'I' && c[i] != 'O' && c[i] != 'U'){
			if(c[i] >= 'a' && c[i] <= 'z')
				 c[i] = c[i] - 32;
			else if(c[i] >='A' && c[i] <= 'Z')
			     c[i] = c[i] + 32;
				 			printf("#%c",c[i]);
	 
}
}
}
