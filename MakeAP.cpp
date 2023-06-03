#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
       // cout<<"done"<<endl;

        int k = c+a;
        int x = 2*b - c;
        int y=2*b -a;

        if(k%(2*b) == 0){
            cout<<"YES"<<endl;
        }
        else if(x>0 && x%a == 0){
            cout<<"YES"<<endl;
        }
        else if(y>0 && y%c == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}