#include<stdio.h>
int main(){
	int b,c,d,e,i,k;
	int a[10000];
	e=1;
	scanf("%d",&b);
	i=1;
//	衡糷计–计常琌-21碞琌糷计 
	while(b>1){
		b=b-2;
		i++;
	}
//	糷计Ωよ琌–糷计羆1=1 2=4 
	k=i*i;
//	拈计倒ウ 
	for(d=0;d<k;d++){
		a[d]=e;
		e=e+2;
	}
//	Ю计 
	c=a[k-1]+a[k-2]+a[k-3];
	printf("%d",c);
}
