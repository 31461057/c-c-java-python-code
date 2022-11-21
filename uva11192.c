#include<stdio.h>
#include<string.h>
int main(){
 char s[10000],t[10000];
 int i,j=0,b,n,c=0,n1,b1=-1,b2,b3,b4=0,slen;
 
 while(scanf("%d %s",&b,&s)!=EOF){
  	slen=strlen(s);
	i=slen/b;

	for(j=0;j<=i;j++){
		b1=b1+b;
		b2=b1;
		b3=c;
		while(b2>=b3){
			t[c]=s[b2];
			b2--;
			c++;
			b4=1;
		}
	}
	for(j=0;j<slen;j++){
		printf("%c",t[j]);
	}
	printf("\n");
	b1=-1;c=0;
}
}
