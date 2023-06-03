#include<bits/stdc++.h>
using namespace std;

int main(){

     int t;
    cin>>t;
    while(t--){
 
        long long a,b;
        cin>>a>>b;
 
        long long int x;
        long long int y;
        long long int z;
 
 
        y = a*b;
        x=a;
        z=a*(b+1);
       // z = x+y;
 
        
 
        if(b==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
 
    }

}