#include<bits/stdc++.h>
using namespace std;

//void solve(string s,)

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;
        string t=s;

        for(int i=0 ; i<n ; i++){

            if(s[i] == '?'){
                
                if(i == 0){
                    if(s[i+1] == 'R'){
                        s[i]='B';
                    }
                    else if(s[i+1]=='B'){
                        s[i]='R';
                    }
                    else{
                        s[i]='R';
                    }
                }

                else{
                    if(s[i-1] == 'R'){
                        //cout<<"done"<<endl;
                        s[i]='B';
                    }
                    else{
                        s[i]='R';
                    }
                }

            }

            
        }
        int ans=0;
        for(int i=1 ; i<n ; i++){
            if(s[i]==s[i-1]){
                ans++;
            }
        }

        for(int i=0 ; i<n ; i++){

            if(t[i] == '?'){
                
                if(i == 0){
                    if(t[i+1] == 'R'){
                        t[i]='B';
                    }
                    else if(t[i+1]=='B'){
                        t[i]='R';
                    }
                    else{
                        t[i]='B';
                    }
                }

                else{
                    if(t[i-1] == 'R'){
                        //cout<<"done"<<endl;
                        t[i]='B';
                    }
                    else{
                        t[i]='R';
                    }
                }

            }

            
        }

        int ans2=0;
        for(int i=1 ; i<n ; i++){
            if(t[i]==t[i-1]){
                ans2++;
            }
        }
   // cout<<ans<<" "<<ans2<<endl;
        if(ans>ans2){
            cout<<t<<endl;

        }
        else{
            cout<<s<<endl;
        }

        //cout<<s<<endl;
    }
}