#include <bits/stdc++.h>
using namespace std;

map<int,int> even;
map<int,int> odd;
vector<int> e;
vector<int> o;
int main()
{
	int n;
	cin >> n;
	vector<pair<int,int> > v;
	pair<int,int> p;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b;
		p.first = a;
		p.second = b;
		v.push_back(p);
		//even[a] = b;
		//odd[b] = a;
		even[a] = -1;
		odd[a] = -1;
	}
	for(int i=0;i<n;i++)
	{
		even[v[i].first] = v[i].second;
		odd[v[i].second] = v[i].first;
	}
	int oddstart;
	for(int i=0;i<n;i++)
	{
		if(even[v[i].first]!=0 && odd[v[i].first]==-1 && v[i].first!=0)
		{
			oddstart = v[i].first;
			break;
		}
	}
	//cout << oddstart << "*" << endl;
	int x = even[0];
	while(x!=0)
	{
		e.push_back(x);
		x = even[x];
	}
	int z = e.size();
	if(n%2!=0)
	{
		x = oddstart;
		while(x!=0)
		{
			o.push_back(x);
			x = even[x];
		}
		int y = o.size();
		for(int i=0;i<y;i++)
		{
			cout << o[i] << " ";
			if(z==y)
			{
				cout << e[i] << " ";
			}
			else if(i!=y-1)
			{
				cout << e[i] << " ";
			}
		}
	}
	else
	{
	x = odd[0];
	while(x!=0)
	{
		if(x==-1)
			break;
		o.push_back(x);
		x = odd[x];
	}
	int y = o.size();
	for(int i=0;i<y;i++)
		{
			cout << o[y-i-1] << " ";
			if(z==y)
			{
				cout << e[i] << " ";
			}
			else if(i!=y-1)
			{
				cout << e[i] << " ";
			}
		}
	}
	return 0;
}