#include<iostream>
#include<stack>
using namespace std;
 
 
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
 
        int c1 = n/3;
        int c2 = (n-c1)/2;
        int rem = n%3;
 
        if(rem == 1){
            c1++;
        }
        
 
        cout<<c1<<" "<<c2<<endl;
 
                
    }
 
}