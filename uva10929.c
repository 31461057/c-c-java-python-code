#include<stdio.h>
int main(){
	int c,m,n=11;
	while(scanf("%d",&m)){
		c=m%n;
		if(c==0){
			printf("%d is a multiple of 11.\n",m);
		}
		else{
			printf("%d is not a multiple of 11.\n",m);
		}
	}
} 
