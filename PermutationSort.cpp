
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }

        if(arr[0] == 1 || arr[n-1] == n){
            int cnt=0;
            for(int i=0 ; i<n ; i++){
                if(arr[i] == i+1){
                    cnt++;
                }
            }

            if(cnt == n){
                cout<<"0"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        else{

           // cout<<"2"<<endl;
           bool test=0;
           if(arr[0] == n && arr[n-1] ==1){
            test=1;
           }

            if(!test){
                cout<<"2"<<endl;
            }
            else{
                cout<<"3"<<endl;
            }
            
        }
    }

}