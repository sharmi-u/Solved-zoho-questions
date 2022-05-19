#include<stdio.h>
int main(){
	char *c="welcometozohocorporation";
	char a[5][5];
	int x,y,i=0;
	for(x=0;x<5;x++){
		for(y=0;y<4;y++){
			a[x][y]=c[i];
			i++;
		}
	}
	for(x=0;x<5;x++){
		for(y=0;y<4;y++){
			if((a[x][y] == 'e')  && (a[x][y+1] == 'o') && (a[x][y+2] == 'o')){
				printf("Start:<%d,%d>\n",x,y);
				printf("End:<%d,%d>\n",x,y+2);
			}
				if((a[x][y] == 'e') && (a[x+1][y] == 'o') && (a[x+2][y] == 'o')){
				printf("Start:<%d,%d>\n",x,y);
				printf("End:<%d,%d>\n",x+2,y);
			}
		}
	}
}
