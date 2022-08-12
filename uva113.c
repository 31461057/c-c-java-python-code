#include<stdio.h>
#include <math.h>
int main(){
	float n,p,k,c,m;
	 
	 scanf("%f",&n);
	 scanf("%f",&p);

	 for(k=2;k<=10^9;k++){
	 m=pow(k,n);
	 c=p/m;
	
	 if(c==1.0){
	 	printf("k=%.2f",k);
	 	
		 
		}
	 
	 }
	 return 0;
} 
