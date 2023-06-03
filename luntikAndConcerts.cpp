#include<bits/stdc++.h>
using namespace std;



int main(){

    long long t;
    cin>>t;
    while(t--){

        vector<long long> arr;
        for(int i=0 ; i<3 ; i++){
            long long n;
            cin>>n;
            //cout<<"done"<<endl;
            arr.push_back((i+1)*n);
            
        }

        
        //cout<<"done"<<endl;
        long long ans1 = arr[0]+arr[1];
        long long ans2 = arr[2];
        long long finalAns = 0;
        if(ans1>=ans2){
            finalAns = ans1-ans2;
        }
        else{
            finalAns = ans2-ans1;
        }
       // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        //cout<<ans2<<" "<<ans1<<endl;
        if(finalAns<=1){
            cout<<finalAns<<endl;
        }

        else{
            if(finalAns%3 == 0 && finalAns%2 == 0){
                cout<<"0"<<endl;
            }

            else if(finalAns%2 == 0){
                cout<<"0"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }

        }
    }





    

}