#include<stdio.h>
#include<string.h>
int main()
{
	char ch[200];
	int i,j,len;
	gets(ch);
	len=strlen(ch);
	for(i=0;i<len;i++){
		for(j=len-1;j>=0;j--){
			if(i==j || i+j == len-1){
				printf("%c",ch[i]);
			}
	
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
