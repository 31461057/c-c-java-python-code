#include<stdio.h>
#include<math.h>
int main(){
int y=0,i,n,j,a[1000],t[1000],m,m1,c=0,c1=0,c2=0;
while(y==0){
	scanf("%d",&n);
	if(n==0){
		break;
	}
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	for(i=0;i<=n;i++){
		t[i]=0;
	}
	for(i=0;i<n;i++){
		m=a[i];
		for(j=2;j<=n;j++){
		m1=m%j;
		while(m1==0){
			c++;
			m=m/j;
			m1=m%j;
			}
		c1=t[j];
		t[j]=c1+c;
		c=0;	
		}
	}
	if(n>=10&&n<=99){
		printf(" ");
	}
	if(n<10){
		printf("  ");
	}
	printf("%d! = ",n);
	for(j=2;j<=n;j++){
		if(t[j]!=0){
			c++;
		if(c==16){
		printf("\n");
				}
	printf("%d ",t[j]);

			}
		}
	c=0;
	printf("\n");
	}
}


