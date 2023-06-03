#include<bits/stdc++.h>
//#include<limits.h>
using namespace std;



int main(){

    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        long long c = abs(a-b);

        if(c==0){
            cout<<"0 0"<<endl;
        }
        else{
            long long j = max(a,b);
           // int k = j%c;
            long long p = j/c;
            long long q = p*c;
            long long y = c*(p+1);
            long long z = min(abs(q-j),abs(y-j));
            cout<<c<<" "<<z<<endl;
        }
    }

}