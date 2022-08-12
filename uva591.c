#include<stdio.h>
int main(){
	int n,h[10],i,a,c,t,tc,f,k;
	c=0;
	k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		h[i]=a;
	}
	for(i=0;i<n;i++){
//	printf("h=%d",h[i]);
	}
	for(i=0;i<n;i++){
	c=h[i]+c;
	}
//	printf("\nc=%d",c);
	t=c%n;
	if(t==0){
		tc=c/n;
//		printf("\ntc=%d",tc);
	for(i=0;i<n;i++){
	if(h[i]<tc){
		f=tc-h[i];
		k=f+k;
	}
	else{
	}
	}
	printf("The minimum number of moves is %d.",k);
	}
	else{
		printf("\nidiot");
	}
	
}
