#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char s[1000];
int len,i,c,n=0,m=0,b=0;

while(scanf("%c",s)!=EOF){
len=strlen(s);
for(i=0;i<len;i++){
	c=s[i];
	if(c=='A'||c=='B'||c=='C'){
	printf("2");
	n++;
	}
else if(c=='D'||c=='E'||c=='F'){
	printf("3");
	n++;
	}
else if(c=='G'||c=='H'||c=='I'){
	printf("4");
	n++;
	}
else if(c=='J'||c=='K'||c=='L'){
	printf("5");
	n++;
	}
else if(c=='M'||c=='N'||c=='O'){
	printf("6");
	n++;
	}
else if(c=='P'||c=='Q'||c=='R'||c=='S'){
	printf("7");
	n++;
	}
else if(c=='T'||c=='U'||c=='V'){
	printf("8");
	n++;
	}
else if(c=='W'||c=='X'||c=='Y'||c=='Z'){
	printf("9");
	n++;
	}
else if(c=='-'){
printf("-");
m++;
}
else if(c=='\n'){
printf(" %d %d\n",n,m);
m=0;n=0;
}
else if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
printf("%c",s[i]);
}
else{
}
}
}

}
