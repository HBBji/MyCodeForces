#include<bits/stdc++.h>
using namespace std;

int Gcd(long long a , long long b){

    int gcD = -1;

    if(a == b){
        return a;
    }

    else{
        for(int i=1 ; i<=b ; i++){
            if(b%i == 0 && a%i == 0){
                gcD = i;
            }
        }
        //cout<<gcD<<endl;
        return gcD;
    }
}


int main(){
     
     int t;
     cin>>t;

     while(t--){

        int ans = -1;

        long long n;
        cin>>n;


        while(ans<=1){
        long long num = n;
        long long digitSum = 0;

        while(num != 0){

            int digit = num%10;
            //cout<<digit<<endl;
            num = num/10;
            digitSum = digitSum + digit;

        }
        //cout<<"done"<<endl;
        //cout<<n<<" "<<digitSum<<endl;
        ans = Gcd(n,digitSum);
       
        //3cout<<n<<" "<<digitSum<<" "<<ans<<endl;
        n++;
        //cout<<"done"<<endl;

        }
      
        cout<<--n<<endl;

     }


}