#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,x,o=1;
	int *ptr=NULL;
	while(o==1){
		scanf("%d",&x);
	ptr=(int*)malloc(sizeof(int)*x);
	for(i=0;i<x;i++)*(ptr+i)=(i*i);
	for(i=0;i<x;i++)printf("ptr[%d]=%d\n",i,ptr[i]);
	free(ptr);}
}
