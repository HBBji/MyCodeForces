#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int k=n*n;

        if(n==2){
            cout<<"-1"<<endl;
        }

        else if(n==1){
            cout<<"1"<<endl;
        }

        
        else{


            int z=1;
            int t=1;

            for(int i=1 ; i<=k ; i++){

                if(t>k){
                    t=2;
                }

                cout<<t<<" ";

                if(z==n){
                    cout<<endl;
                    z=0;
                }
                z++;
                t+=2;
            }

            

        }

        }

        

        
    }