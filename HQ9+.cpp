#include<bits/stdc++.h>
using namespace std;

int main(){

    string t;
    cin>>t;

    int n = t.size();
    bool flag=1;
    for(int i=0 ; i<n ; i++){

        if(t[i] == 'H' || t[i] == 'Q' || t[i] == '9' ){
            cout<<"YES"<<endl;
            flag=0;
            break;
        }

    }

    if(flag){
        cout<<"NO"<<endl;
    }

}