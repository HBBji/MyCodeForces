#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
#define cases long long test;cin>>test;while(test--)
#define f_io ios::sync_with_stdio(false); cin.tie(0)
#define foi(a,n) for(long long i=a;i<n;i++)
#define foj(a,n) for(long long j=a;j<n;j++)
#define fok(a,n) for(long long k=a;k<n;k++)
#define ll long long
#define MOD 1000000007
#define INF 1000000000
using namespace std;
int main()
{
    f_io;
    cases{
        ll n,l;
        cin>>n>>l;
        ll arr[n];
        foi(0,n)
        {
            cin>>arr[i];
        }
        ll one=0,zero=0,ans=0;
        foi(0,l)
        {
            foj(0,n)
            {
                if(((arr[j])&(1<<i)))
                {
                    //cout<<i<<" ";
                    one++;
                }
                else{
                    zero++;
                }
            }
            if(one>zero)
            {
                ans+=(1<<i);
            }
            //cout<<one<<" "<<zero<<"\n";
            one=0,zero=0;
        }
        cout<<ans<<"\n";
        // ll x= (16)&(1<<4);
        // cout<<x<<"\n";
    }
}









































































































