#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        bool flag = 1;

        if(n%2020 == 0 || n%2021 == 0){
            cout<<"YES"<<endl;
        }

        else if(n<2020){
            cout<<"NO"<<endl;
        }

        else{
            int k = n/2020;
            for(int i=1 ; i<=k ; i++){
                int k = n-i;
                if(k%2020 == 0){
                    flag=0;
                    break;
                }
            }

            if(flag){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            

        }
    }

}