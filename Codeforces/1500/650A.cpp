#include <bits/stdc++.h>
#define ll long long int
using namespace std;

map<pair<ll,ll>, ll> freq;

map<ll,ll> x;
map<ll,ll> y;
map<ll,bool> visitedx;
map<ll,bool> visitedy;
map<pair<ll,ll>, bool> visitedp;

vector<pair<ll,ll> > v;

int main()
{
	ll n,sum=0;
	cin >> n;
	pair<ll,ll> p;

	ll i,a,b;
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		p.first = a;
		p.second = b;
		v.push_back(p);
		freq[p]++;
		x[a]++;
		y[b]++;
	}

	ll p1;
	ll p2;
	ll p3;

	for(i=0;i<n;i++)
	{
		p1 = 0;
		p2 = 0;
		p3 = 0;
		if(!visitedx[v[i].first])
			p1 = x[v[i].first]*(x[v[i].first]-1)/2;
		if(!visitedy[v[i].second])
			p2 = y[v[i].second]*(y[v[i].second]-1)/2;
		if(!visitedp[v[i]])
			p3 = freq[v[i]]*(freq[v[i]]-1)/2;
		sum+=(p1+p2-p3);
		visitedp[v[i]] = true;
		visitedy[v[i].second] = true;
		visitedx[v[i].first] = true;
		//cout << p1 << " " << p2 << " " << p3 << endl;
	}
	cout << sum << endl;

	return 0;
}