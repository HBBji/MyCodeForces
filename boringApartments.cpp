#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){


        int x;
        cin>>x;

        int ans = 0;

        if(x/10 == 0){
            int digits = 1;
            int number = x%10;
            ans = ans + (number-1)*10 + digits;
        }
        else if(x/100 == 0){
            int digits = 2;
            int number = x%10;
            ans = ans + (number-1)*10 + digits+1;
        }
        else if(x/1000 == 0){
            int digits = 3;
            int number = x%10;
            ans = ans + (number-1)*10 + digits+3;
        }
        else if(x/10000 == 0){
            int digits = 4;
            int number = x%10;
            ans = ans + (number-1)*10 + digits+6;
        }

        cout<<ans<<endl;
    }
}