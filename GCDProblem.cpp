#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;

        n=n-1;
        if(n%2 == 0){
            int k=0;
            for(int i=2 ; i<n ; i++){
                if((n+1)%i == 0){
                    k=i;
                }
            }

            if((n/2)%2 == 0){
                cout<<(n/2)-1<<" "<<(n/2)+1<<" "<<"1"<<endl;
            }
            else{
                cout<<(n/2)-2<<" "<<(n/2)+2<<" "<<"1"<<endl;
            }
        }

        else{
            cout<<n/2<<" "<<(n/2)+1<<" "<<"1"<<endl;
        }

    }
}