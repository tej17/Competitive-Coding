#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll n,k,p,i,x,curridx=0;
	cin >> n >> k >> p;
	vector<ll> v;
	vector<set<ll> > sol;
	for(i=0;i<n;i++){
		set<ll> group;
		cin >> x;
		v.push_back(x);
		sol.push_back(group);
	}
	vector<pair<ll,ll> > cv;
	for(i=0;i<n;i++){
		cv.push_back(make_pair(v[i],i));
	}
	sort(cv.begin(),cv.end());
	sort(v.begin(),v.end());
	sol[0].insert(0);
	for(i=1;i<n;i++){
		if(v[i]-v[i-1]<=k){
			sol[curridx].insert(i);
		}
		else{
			curridx = i;
			sol[curridx].insert(i);
		}
	}
	ll a[n], flag_start = 1, b[n];
	for(i=0;i<n;i++){
		set<ll> group = sol[i];
		set<ll>::iterator it;
		for(it=group.begin();it!=group.end();++it){
			a[*it] = flag_start;
		}
		flag_start++;
	}
	for(i=0;i<n;i++){
		// cout << cv[i].second << " " << a[i] << endl;
		b[cv[i].second] = a[i];
	}
	while(p--){
		ll x,y;
		cin >> x >> y;
		if(b[x-1]==b[y-1])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}