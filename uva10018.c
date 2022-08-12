#include<stdio.h>
int main(){
	int a[100],b,n,i,s,c,sn,st=0,h=1,sc=1;
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&n);
		a[i]=n;
	
	}
		for(i=0;i<b;i++){
		n=a[i];
		
		while(h<=1){
			
			sn=n;
			while(n>0){
				c=c*10+n%10;
				n=n/10;
			}
			st=sn+c;
			n=st;
			h++;
			c=0;
		}
			h=1;
		a[i]=n;
		
		}
		
	for(i=0;i<b;i++){
		n=0;
		n=a[i];
		
		
		for(s=0;s<=1000;s++){
			c=0;
			sn=n;
			if(n<=18){
				st=n;
				break;
	}
			while(n>0){
				c=c*10+n%10;
				n=n/10;
				
			}
			
			if(sn==c){
			break;
		}
		
			st=sn+c;
			n=st;

			sc++;
		}
		a[i]=st;
		
		printf("%d,%d\n",sc,a[i]);
		sc=1;
		

	}
	
}
