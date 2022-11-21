#include<stdio.h>
#include<string.h>
//int main(){
//	int i,j,n,c,t=0,i1;
//	while(scanf("%d",&c))
//	{
//	while(c>=t){
//		for(i=1;i<=100000000;i++){
//			t=t+i;
//			i1=i;
//		if(c<t){
//			break;
//		}
//		}
//	}
//	for(i=1;i<=100000000;i++){
//		n=t-i;
//		if(n==c){
//			printf("%d %d\n",i,i1);
//		}
//	}
//	t=0;
//}
//}
int main(){
	int n,c=1,i,j,s,b[10],y=0,x1,y1,x=0,x2,y2,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<4;j++){
		scanf("%d",&s);
		b[j]=s;
		}
		x1=b[0];y1=b[1];x2=b[2];y2=b[3];
		t=t+(x1+y1+1+y2+x2)*(y2+x2-y1-x1)/2;
		t=t+x2-x1;
		printf("%d",t);
		t=0;
}
//int main(){
//	char s[100];
//	int M,Y,C,n,i,j=0;
//	for(i=0;i<100;i++){
//		j++;
//	scanf("%c",&s[i]);
//	 if( getchar() == '\n') 
//        { 	
//            break; 
//        } 
//	}
//	for(i=0;i<j;i++){
//		printf("%c",s[i]);
//		
//	}
	
}
