#include<stdio.h>
#include<math.h>
int main(){
	int n,i,a[100],count=0,k;
	printf("Set of numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	if(a[i]%6==0 && a[i]%4==0)
	count+=4;
	if(a[i]%2==0)
	count+=3;
	k=sqrt(a[i]);
	if(a[i]==(k*k))
	count+=5;
}
printf("%d",count);
}
