#include<stdio.h>
int main(){
	int b,c,d,e,i,k;
	int a[10000];
	e=1;
	scanf("%d",&b);
	i=1;
//	��X�h�ơA�C�ӼƳ��O-2�A�b�^�[1�A�N��n�O�h�� 
	while(b>1){
		b=b-2;
		i++;
	}
//	�h�ƪ������n�O�C�h�����`�[1=1 2=4 
	k=i*i;
//	��_�Ƶ��� 
	for(d=0;d<k;d++){
		a[d]=e;
		e=e+2;
	}
//	�����Ƭۥ[ 
	c=a[k-1]+a[k-2]+a[k-3];
	printf("%d",c);
}
