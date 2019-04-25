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
		sort(a,a+n);
		int count = 1,ans=0;
		for(i=n-1;i>=0;i--)
		{
			if(count==1)
			{
				ans+=a[i];
				count++;
			}
			else if(count==2)
			{
				ans+=a[i];
				count++;
			}
			else if(count==3)
			{
				count++;
				continue;
			}
			else if(count==4)
			{
				count = 1;
				continue;
			}
		}
		cout << ans << endl;
	}
	return 0;
}