#include<iostream>
#include<math.h>
using namespace std ;

int Table[1000001],Ans[1000001];

void Create_Table(){

    Table[1000001]={0};
    int Max = 0,ans;

    for(int i=1;i<=10;i++){
    	cout<<i<<endl;
        for(int j=i;j<=10;j+=i){	
            Table[j] += 1;
            cout<<Table[j]<<endl;
        }
        cout<<endl;
    }
   
    for(int i=0;i<=10;i++){

// cout<<Table[i]<<endl;
    }

}

int main(){

 
    Create_Table();
    
}
