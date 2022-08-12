#include<iostream>
using namespace std;
// 1-17 13-1=倖存者為12號，temp=12-1;1-1=倖存者為0號大於0一律減一， temp=0-0; 
int main(){
    int N = 0;
    while(cin>>N && N){
        for(int m=1;m<=10000 ; m++){
            int temp=0; 
            for(int n=1; n < N; n++){
                temp=(temp+m)%n;
//                cout << temp; 
            }
//            cout << endl;
            if(temp==11){
                cout << m << endl;
                break;
            }
        }
    }
    return 0;
}
