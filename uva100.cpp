#include <iostream>
using namespace std;
int main(){
//	uva 100
	int f,nf,n,j,i,c;
	cout<<"pleace input the f and n\n"<<endl;
	cin>>f;
	cin>>n;
	cout<<"f="<<f<<"n="<<n;
	i=1;
	c=i;
		while(f<=n){
			f++;
			
			nf=f;
			while(nf>1){
			j=nf%2;
			if(j==1){
				nf=3*nf+1;

			}
			else{
				nf=nf/2;

			}
			i++;
			}	
		
		if(c<i){
			c=i;
		}
		i=1;
		}
				while(f>=n){
			f--;
			
			nf=f;
			while(nf>1){
			j=nf%2;
			if(j==1){
				nf=3*nf+1;

			}
			else{
				nf=nf/2;

			}
			i++;
			}	
		
		if(c<i){
			c=i;
		}
		i=1;
		}
		cout<<"c="<<c;

}
