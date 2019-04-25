#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int ans = a[n-1];
		for(i=n-2;i>=0;i--)
		{
			ans = max(ans+1,a[i]);
		}
		cout << ans << endl;
	}
	return 0;
}