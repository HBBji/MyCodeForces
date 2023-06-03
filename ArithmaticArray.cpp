#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int sum=0;

        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        double ans = sum/n;
       // int ans2=sum/n;
        if(ans==1 && sum%n == 0){
            cout<<"0"<<endl;
        }
        else{
            if(sum<0){
                cout<<"1"<<endl;
            }
            
            else if(sum>0){
                if(sum<=n){
                    cout<<"1"<<endl;
                }
                else{
                    cout<<sum-n<<endl;
                }
            }
            else{
                cout<<"1"<<endl;
            }
        }

    }
}