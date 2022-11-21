#include<stdio.h>
int main(){
	int y=0,i,j,n,n1,p[1000][1000];
	while(y==0){
		scanf("%d",&n);
		n1=n;
		if(n==0){
			break;
		}
		for(i=0;i<n;i++){
			for(j=0;j<n1;j++){
				scanf("%d",&p[i][j]);
			}
		}
	}
}
