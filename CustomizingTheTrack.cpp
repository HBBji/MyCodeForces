#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        ll total=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            total+=x;
        }
        ll extra = total%n;
        ll one = n - extra;
        ll two = extra;
        cout<<one*two<<"\n";
        
    }

}