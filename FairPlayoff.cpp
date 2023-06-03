#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){

        int arr1[4];
        int maxi=-1;
        int arr2[4];

        for(int i=0 ;i <4 ; i++){
            cin>>arr1[i];
            arr2[i]=arr1[i];
        }

        sort(arr2,arr2+4);

        if((arr1[0] == arr2[3] || arr1[0] == arr2[2]) || (arr1[1] == arr2[3] || arr1[1] == arr2[2])){
            if((arr1[2] == arr2[3] || arr1[2] == arr2[2]) || (arr1[3] == arr2[3] || arr1[3] == arr2[2])){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}