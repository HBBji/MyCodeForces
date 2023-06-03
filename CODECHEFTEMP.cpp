#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    
	    long long a = 0;
	    long long b = 0;
	    long long c =0;
	    bool flag = 0;
	    
	    for(int i=1 ; i<=n/2 ; i++){
	        
	        if(n%i == 0){
	            
	            for(int j=i+1 ; j<=n/2 ; j++){
                    
                    if(n%j == 0){
                        
                        for(int k = j+1 ; k<=n/2 ; k++){
	                
	                         if(n%k == 0){
	                             
	                             long long q = i*j;
	                             long long w = i*k;
	                             long long e = j*k;
	                             long long r = i*j*k;
	                             
	                             if(n%q == 0 && n%w == 0 && n%e == 0 && r%n == 0){
	                                 
	                                 a=i;
	                                 b=j;
	                                 c=k;
	                                 flag = 1;
	                                 break;
	                             }
	                         }
	                
                    }
                    
                    if(flag){
                        break;
                    }
	            
	            }
	            
	            if(flag){
	                break;
	            }
	        }
	        
	            
	        }
	    }
	    
	    if(a == b || b==c || c==a){
	        cout<<"-1"<<endl;
	    }
	    else{
	        cout<<a<<" "<<b<<" "<<c<<endl;
	    }
	    
	}
	
	return 0;
}

