#include<stdio.h>
int main(){
	int i,j,z=0,y=1,n=1;
	char f[12],c,k;
	while(n==1){
	for(i=0;i<=12;i++){
	scanf("%c",&f[i]);

	}
	if(f[0]==f[6]&&f[5]==f[11]||f[0]==f[11]&&f[5]==f[6]){
		y=0;
	}
	else{
		printf("false\n");
	}
	while(y==0){
	if(f[1]==f[7]&&f[2]==f[8]&&f[3]==f[9]&&f[4]==f[10]){
		printf("true\n");
		break;
	}
	for(j=1;j<=3;j++){
	c=f[1];
	f[1]=f[2];
	f[2]=f[3];
	f[3]=f[4];
	f[4]=c;
	if(f[1]==f[7]&&f[2]==f[8]&&f[3]==f[9]&&f[4]==f[10]){
		z=1;
		break;
	}
	}

	if(z!=0){
		printf("true\n");
		break;
	}
	else{
		printf("false\n");
		break;
	}
}
	y=1;z=0;
	}
		}

