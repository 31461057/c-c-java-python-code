#include <stdio.h>
#include <string.h>
int main(){
int c=1,i,j,ans[100][100]={0},i1,j1,i2,j2,m1,n1,p=0;
char all[100][100],b;
int m,n;
while(scanf("%d %d",&n,&m)){
	


if(n==0&&m==0){
break;
}

p++;

	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	scanf("%c",&all[i][j]);
	}
	getchar();
	}

	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	if(all[i][j]=='*'){
	i1=i-1;
	j1=j-1;
	i2=i+1;
	j2=j+1;
	//-1 0
	if(i1>1&&j>=0){
	ans[i1][j]+=1;
	}
	//--
	if(i1>1&&j1>1){
	ans[i1][j1]+=1;
	}
	//-+
	if(i1>1&&j2<m){
	ans[i1][j2]+=1;
	}
	//0-
	if(i>=0&&j1>1){
	ans[i][j1]+=1;
	}
	//0+
	if(i>=0&&j2<m){
	ans[i][j2]+=1;
	}
	//+0
	if(i2<n&&j>=0){
	ans[i2][j]+=1;
	}
	//+-
	if(i2<n&&j1>=0){
	ans[i2][j1]+=1;
	}
	//++
	if(i2<n&&j2<m){
	ans[i2][j2]+=1;
	}
	ans[i][j]=-1;
	}
	}
	}
	//

	printf("Field #%d:\n",p);
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	if(ans[i][j]<0){
		printf("*");
	} 
	else{
		printf("%d",ans[i][j]);
	}
	}
		printf("\n");
	}
	printf("\n");
}

}
