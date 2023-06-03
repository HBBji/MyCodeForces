#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define ll long long
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		vector<int>v;
		ll cnt=0;
		loop(i,n)
		{
		cin>>arr[i];
		if(arr[i]%2==0)
		cnt++;
		else
		v.push_back(arr[i]);
		}
		sort(v.begin(),v.end());
		ll ans=(n)*cnt-(cnt*(cnt+1)/2);
		cnt=0;
		for(int i=0;i<v.size();i++)
		{
			for(int j=i+1;j<v.size();j++)
			{
				int x=gcd(v[i],v[j]);
				if(x>1)
				cnt++;
				
			}
		}
		ans+=cnt;
		cout<<ans<<endl;
		
	}
	
}