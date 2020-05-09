#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n1,n2,n3;
		cin >> n1 >> n2 >> n3;
		vector<ll> v;
		v.push_back(n1);
		v.push_back(n2);
		v.push_back(n3);
		sort(v.begin(),v.end());
		v[0] = v[0] % MOD;
		v[1] = (v[1]-1) % MOD;
		v[2] = (v[2]-2) % MOD; 
		cout << (((v[0]*(v[1])) % MOD) * (v[2])) % MOD << endl;
	}
	return 0;
}