#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int*arr = new int[n];
    
    int totSum=0;

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        totSum+=arr[i];

    }

    sort(arr,arr+n);
    long long ans1=0;
    long long ans2=0;
    bool flag=1;

    if(n%2 == 0){
        for(int i=0 ; i<n/2 ; i++){
            ans1+=arr[i];
        }
        ans2 = totSum-ans1;
    }
    else{
        for(int i=0 ; i<n/2 ; i++){
            ans1+=arr[i];
        }
        ans2 = totSum-ans1;   
    }
    //cout<<ans1<<" "<<ans2<<endl;
    ans1 = ans1*ans1;
    
    ans2 = ans2*ans2;
    //cout<<pow(ans1,2)<<endl;
    //cout<<ans2<<" "<<k<<endl;
    cout<<ans1+ans2<<endl;

}
