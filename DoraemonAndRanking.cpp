#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        int*arr = new int[n];
        map<int,int>m;

        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            m[arr[i]]=1;
        }
        int num=1;
        int ans=0;
        int temp=0;
        while(x){
            if(m[num]!=1){
                x--;
                ans=num;
            }
            num++;
        }

        while(m[ans+1]==1){
            ans++;
        }

        cout<<ans<<endl;

    }
}