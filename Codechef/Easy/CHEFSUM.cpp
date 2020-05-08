#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n,i,x,sum=0,min = LLONG_MAX,idx;
		cin >> n;
		vector<ll> inp,prefix,suffix;
		for(i=0;i<n;i++){
			cin >> x;
			inp.push_back(x);
			prefix.push_back(x);
			suffix.push_back(x);
		}
		for(i=1;i<n;i++)
			prefix[i]+=prefix[i-1];
		for(i=n-2;i>=0;i--)
			suffix[i]+= suffix[i+1];
		for(i=0;i<n;i++){
			if((prefix[i]+suffix[i]) < min){
				min = prefix[i] + suffix[i];
				idx = i;
			}
		}
		cout << idx + 1 << endl;
	}
	return 0;
}