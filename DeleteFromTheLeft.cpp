#include<bits/stdc++.h>
using namespace std;

int main(){

    string a,b;
    cin>>a>>b;

    int ale = a.length();
    int ble = b.length();
    int alen = ale-1;
    int blen = ble-1;
    bool flag = 0;
    int ans = 0;
    // int ans = 0;

    // while(alen != blen){
    //     if(alen>blen){
    //         a.erase(a.begin()+0);
    //         alen--;
    //     }
    //     else{
    //         b.erase(b.begin()+0);
    //         blen--;
    //     }
    //     ans++;

    // }

    // if(a == b){
    //     cout<<ans<<endl;
    // }
    // else{
    //     while(a!=b){
    //         a.erase(a.begin()+0);
    //         b.erase(b.begin()+0);
    //         ans = ans+2;
    //     }
    //     cout<<ans<<endl;
    // }

    int k = min(ale,ble);
    int p = k;

    while(k!=0){
        if(a[alen] == b[blen]){
            ans++;
            alen--;
            blen--;
        }
        
        k--;
    }

    if(ans == 0){
        cout<<ale+ble<<endl;
    }
    else{
        cout<<ale+ble-(2*ans)<<endl;
    }

    return 0;


}