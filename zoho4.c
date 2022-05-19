#include<stdio.h>
int main(){
	int i,j,n,a[100],k,m;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("K:");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<=n/k;i++){
			m=k*i;
			for(j=m+k-1;j>=m;j--){
				if(j<n){
			printf("%d ",a[j]);	
		}
	}
	}	
}
