#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int brr[n];
        map<int,int> z;
       // brr=arr;

        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            z[arr[i]]=i;
            brr[i]=arr[i];
        }

        string s;
        cin>>s;
        int onecount=0;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='1'){
                onecount++;
                
            }
        }

        vector<int> one;
        vector<int> zero;

        sort(arr,arr+n);

        for(int i=0 ; i<n ; i++){
            if(s[i]=='1'){
                one.push_back(brr[i]);

            }
            else{
                zero.push_back(brr[i]);
            }
        }

        sort(one.begin(),one.end());
        sort(zero.begin(),zero.end());

        int k=0; 
        int zerocount=n-onecount;

        for(int i=0 ; i<n ; i++){
            if(i<onecount){
                int index = z[one[onecount-i-1]];
                brr[index]=arr[n-i-1];
            }
            else{
                int index = z[zero[zerocount-(i-onecount)-1]];
                brr[index]=arr[n-i-1];
            }
        }       

        for(int i=0 ; i<n ; i++){
            cout<<brr[i]<<" ";
        }
        cout<<endl;

    }

}