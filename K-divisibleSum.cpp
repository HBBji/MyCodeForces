#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        long long n,k;
        cin>>n>>k;
        long long ans=0;

        if(k>n){
            while(k>0){
                long long t = k/n;
                if(k%n !=0){
                    t++;
                }
                
                k = k-(t*n);
                ans = max(ans,t);
            }
            cout<<ans<<endl;
        }
        else if(n>k){
            long long p = n/k;
            if(n%k !=0){
                p++;
            }
            k = k*p;
            while(k>0){
                long long t = k/n;
                if(k%n !=0){
                    t++;
                }
                k = k-(t*n);
                ans = max(ans,t);
            }
            cout<<ans<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}