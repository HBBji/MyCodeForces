#include<bits/stdc++.h>
using namespace std;

int main(){
    
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int ans1 = max(3*a/10 , a-(a*c/250));
        int ans2 = max(3*b/10 , b-(b*d/250));

        if(ans2>ans1){
            cout<<"Vasya"<<endl;
        }
        else if(ans1>ans2){
            cout<<"Misha"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
        
}