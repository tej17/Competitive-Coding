#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n,k,x,i,sum=0;
		scanf("%lld %lld",&n,&k);
		vector<ll> arr;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			arr.push_back(x);
			sum+=arr[i];
		}
		ll count=0;
		for(i=0;i<n;i++)
		{
			if((arr[i]+k)>(sum-arr[i]))
			{
				count++;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}