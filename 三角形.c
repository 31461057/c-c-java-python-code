#include<stdio.h>
int main(){
	int i,j,n;
	for(i=0;i<=5;i++){
		for(j=1;j<=i;j++){
		printf(" ");	
		}
		for(n=0;n<=5-i;n++){
		printf("***");
		}
		printf("\n");
	}
} 
