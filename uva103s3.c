#include<stdio.h>
//�S��k�B�z2�H�W������ 
int main(){
	int d[29][9],i,j,k,n,m,s,x,z,q,a,l,c,f[29][9];
		scanf("%d",&k);
		scanf("%d",&n);
//		��J�i�h 
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){
			scanf("%d",&d[i][j]);
		}
	}
//	�Ʀn 
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){			
			for(m=j;m<n;m++){
				if(d[i][j]>d[i][m]){
					s=d[i][m];
					d[i][m]=d[i][j];
					d[i][j]=s;
			}
		}	
	}	
}
//	�t�s��� 
		for(i=0;i<k;i++){
			for(j=0;j<n;j++){
				f[i][j]=d[i][j];
			}
		}
//  ������� 
		for(i=0;i<k;i++){
			for(m=0;m<k;m++){
				for(x=0;x<n;x++){
					z=d[i][x];
					q=d[m][x];
					if(x<n-1){
						a++;
					}
					l=d[i][a];
					c=d[m][a];
				if(z<q&&l<c){
					d[i][x]=d[m][x];
					d[i][a]=d[m][a];
					d[m][x]=z;
					d[m][a]=l;
				}
				
			}
			a=0;	
		}
	}
//	�s������ 
		for(i=0;i<k;i++){
			for(j=0;j<k;j++){
				if(d[i][0]==f[j][0]){	
					printf("%d",j+1);
				}
			}	
		}
}

