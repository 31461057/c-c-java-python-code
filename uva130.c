#include<stdio.h>

void initial(int m[],int p[],int n){
	int i;
	for(i=0;i<n-1;i++)
		p[i]=m[i]=i+1;
	m[n-1]=0;
	p[n-1]=n;
}
int main(){
	int n,k;
	while(scanf("%d%d",&n,&k)==2){
		if(n==0&&k==0)
			break;
		int i,j,e,count,t;
		int pre_e,pre_j;
		int total;
		int p[100]; //  �H���s��
		int m[100]; //  �����䵲
		bool killed=false; // No.1 �Q��?		
		i=0;
		while(true){
			total=n; // �`�H��
			if(total==1) break;
			initial(m,p,n);			
			j=i;
			e=(i-1>=0)?i-1:n-1;
			while(!killed){
				for(pre_j=e,j=m[e],count=1;count!=k;pre_j=j,j=m[j],count++); // ��X�U�@�ӭn�Q�����H
				for(pre_e=j,e=m[j],count=1;count!=k;pre_e=e,e=m[e],e!=j?count++:0); // ��X�I����
				if(p[j]==1){ killed=true; break; }
				total--;
				if(total==1) break;
				m[pre_j]=m[pre_e]; // �Q�����H���e�@�Ӥ��䵲����I����
				m[pre_e]=m[e]; // �I���̪��e�@�Ӥ��䵲����I���̪��U�@�ӤH
				m[e]=m[j]; // �I���̤��䵲����Q�����H���䵲
			}
			if(!killed)			
				break;	
			i++;
			killed=false;
		}
		printf("%d\n",i+1);
	}
	return 0;
}
