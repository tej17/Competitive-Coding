#include <bits/stdc++.h>
using namespace std;

vector<long long int> v;

int main()
{
	long long int n,k,i,t;
	cin >> n >> k;
	//v.push_back(1);
	//v.push_back(n);
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				v.push_back(i);
			}
			else
			{
				v.push_back(n/i);
				v.push_back(i);
			}
		}
	}
	sort(v.begin(),v.end());
	t = v.size();
	if(k>t)
		cout << -1 << endl;
	else
		cout << v[k-1] << endl;
	return 0;
}
