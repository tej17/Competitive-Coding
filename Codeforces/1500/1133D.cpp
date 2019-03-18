#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> m;

int a[200010];
int b[200010];
int n;

void gcdconversion(pair<int, int>& p)
{
	if(p.first < 0)
	{
		p.first *= -1;
		p.second *= -1;
	}
	else if (p.first == 0 && p.second < 0)
	{
		p.second *= -1;
	}
	int d = __gcd(abs(p.first), abs(p.second));
	p.first /= d;
	p.second /= d;
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	int ans = 0;
	int cnt0 = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
		{
			if(b[i] == 0)
				cnt0++;
		}
		else
		{
			pair<int, int> p = make_pair(-1.0*b[i], a[i]);
			gcdconversion(p);
			m[p]++;
			ans = max(ans, m[p]);
		}
	}
	cout << cnt0 + ans << endl;
}