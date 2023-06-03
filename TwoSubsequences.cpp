#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        char min = 'z';
        int minChar = min;
        int len = s.length();

        for(int i=0 ; i<len ; i++){
            char c = s[i];
            int cInt = c;

            if(cInt<=minChar){
                minChar = cInt;
            }
        }

        char ans = minChar;
        cout<<ans<<" ";

        int count = 0;
        for(int i=0 ; i<len ; i++){
            if(s[i] == ans && count == 0){
                count++;
            }
            else{
                cout<<s[i];
            }
        }

        cout<<endl;

    }
    

}