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
		int p[100]; //  人的編號
		int m[100]; //  環狀鍵結
		bool killed=false; // No.1 被殺?		
		i=0;
		while(true){
			total=n; // 總人數
			if(total==1) break;
			initial(m,p,n);			
			j=i;
			e=(i-1>=0)?i-1:n-1;
			while(!killed){
				for(pre_j=e,j=m[e],count=1;count!=k;pre_j=j,j=m[j],count++); // 找出下一個要被殺的人
				for(pre_e=j,e=m[j],count=1;count!=k;pre_e=e,e=m[e],e!=j?count++:0); // 找出埋葬者
				if(p[j]==1){ killed=true; break; }
				total--;
				if(total==1) break;
				m[pre_j]=m[pre_e]; // 被殺之人的前一個之鍵結接到埋葬者
				m[pre_e]=m[e]; // 埋葬者的前一個之鍵結接到埋葬者的下一個人
				m[e]=m[j]; // 埋葬者之鍵結接到被殺之人的鍵結
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
