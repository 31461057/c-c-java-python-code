#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
//1
//int main(){
//	int i,j,n,m,c1;
//	while(cin>>n>>m){
//		for(i=1;c1<n&&m>1;i++){
//		c1=pow(m,i);
//		}
//		if(c1>n){
//			cout<<"Boring!"<<endl;
//		}
//		else{
//			while(c1>0){
//				cout<<" "<<c1;
//				c1=c1/m;
//			}
//			cout<<endl;
//		}
//	}
//} 
//2
int main(){
	int n,i,j;
	vector<long long>mbee, fbee;
	mbee.push_back(0);
	fbee.push_back(1);
	while(cin>>n&&n!=-1){
		while(n>mbee.size()){
			int cur_m = mbee.back();
            int cur_f = fbee.back();
            mbee.push_back(cur_m + cur_f);
            fbee.push_back(cur_m + 1);
		}
			cout<<""<<mbee[n]<<" "<<fbee[n]+mbee[n]<<endl;	
		}
	}

