#include<stdio.h>
#include<math.h>
int main(){
	int n,j=0,i=0,l;
	while(i==0){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(l=1;l<=n;l++){
			j=j+pow(l,2);
		}
		printf("%d\n",j);
		j=0;
	}
} 
