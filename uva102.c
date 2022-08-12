#include<stdio.h>
int main(){
	int bucketb[3],b,bucketg[3],g,bucketc[3],c,i,bt,gt,ct,bc,bg,cg,b1,b2,b3;
	
	for(i=0;i<3;i++){
		scanf("%d",&b);
		bucketb[i]=b;
		scanf("%d",&g);
		bucketg[i]=g;
		scanf("%d",&c);
		bucketc[i]=c;
	}
	i=0;

//		b+c
	bc=bucketb[0]+bucketc[0];
//		b+g
	bg=bucketb[0]+bucketg[0];
//		c+g
	cg=bucketg[0]+bucketc[0];
//	bc³Ì¤p 
	if(bc<bg&&bc<cg){
		if(bucketb[0]<bucketc[0]){
			printf("B");
			b1=bucketg[0]+bucketc[0];
			if(bucketg[1]>bucketc[1]){
				
				printf("G");
				b2=bucketb[1]+bucketc[1];
				printf("C");
				b3=bucketb[2]+bucketg[2];
			}
			else{
				printf("C");
				b2=bucketb[1]+bucketg[1];
				printf("G");
				b3=bucketb[2]+bucketc[2];
			}
		printf("%d",b1+b2+b3);
		}
		else{
			printf("C");
			b1=bucketg[0]+bucketb[0];
			if(bucketg[1]>bucketb[1]){
				printf("G");
				b2=bucketb[1]+bucketc[1];
				printf("B");
				b3=bucketg[2]+bucketc[2];
			}
			else{
				
				printf("B");
				b2=bucketg[1]+bucketc[1];
				printf("G");
				b3=bucketb[2]+bucketc[2];	
			}
			printf("%d",b1+b2+b3);
	}
}
//	bg
	else if(bg<bc&&bg<cg){
		if(bucketb[0]<bucketg[0]){
			printf("B");
			b1=bucketg[0]+bucketc[0];
			if(bucketg[1]>bucketc[1]){
				printf("G");
				b2=bucketb[1]+bucketc[1];
				printf("C");
				b3=bucketg[2]+bucketb[2];
			}
			else{
				printf("C");
				b2=bucketg[1]+bucketb[1];
				printf("G");
				b3=bucketb[2]+bucketc[2];
			}
				printf("%d",b1+b2+b3);
		}
		else {
			printf("G");
			b1=bucketc[0]+bucketb[0];
			if(bucketb[1]>bucketc[1]){
				printf("B");
				b2=bucketc[1]+bucketg[1];
				printf("C");
				b3=bucketg[2]+bucketb[2];
			}
			else{
				printf("C");
				b2=bucketg[1]+bucketb[1];
				printf("G");
				b3=bucketc[2]+bucketb[2];
			}
				printf("%d",b1+b2+b3);
		}
}
//	cg
	else{
		if(bucketc[0]<bucketg[0]){
			printf("C");
			b1=bucketb[0]+bucketg[0];
			if(bucketg[1]>bucketb[1]){
				printf("G");
				b2=bucketb[1]+bucketc[1];
				printf("B");
				b3=bucketc[2]+bucketg[2];
			}
			else{
				printf("B");
				b2=bucketc[1]+bucketg[1];
				printf("G");
				b3=bucketb[2]+bucketc[2];
			}
				printf("%d",b1+b2+b3);
		}
		else{
			printf("G");
			b1=bucketb[0]+bucketc[0];
				if(bucketc[1]>bucketb[1]){
				printf("C");
				b2=bucketb[1]+bucketg[1];
				printf("B");
				b3=bucketc[2]+bucketg[2];
			}
			else{
				printf("B");
				b2=bucketc[1]+bucketg[1];
				printf("C");
				b3=bucketb[2]+bucketg[2];
			}
				printf("%d",b1+b2+b3);
		}
	}
}

