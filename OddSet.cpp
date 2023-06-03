#include<iostream>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int even = 0;
            int odd = 0;
        n = n*2;    

        for(int i=0 ; i<n ; i++){
            int element;
            cin>>element;
           

            if(element%2 == 0 || element == 0){
                even++;
            }
            else if(element != 0){
                odd++;
            }

        }

        
            if(even != odd){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }

    }
    
}