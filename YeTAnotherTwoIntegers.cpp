#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int a,b;
        cin>>a>>b;

        if(a == b){
            cout<<"0"<<endl;
        }

        else{
            int c = abs(a-b);
            

            int rem = c%10;
            int digit = c/10;
            int ans = 0;

            if(rem == 0){
                ans = digit;
            }
            else{
                ans = digit+1;
            }
            cout<<ans<<endl;

            
        }
    }
}