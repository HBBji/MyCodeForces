#include<bits/stdc++.h>
using namespace std; 


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int ans = a*n;

        int total=0;
        if(b>0)ans+=b*n;
        
        else{
            for(int i=1 ; i<n ; i++){
                if(s[i]!=s[i-1])total++;
            }
            total++;
            ans+=((total/2)+1)*b;
        }

        cout<<ans<<endl;


    }
}