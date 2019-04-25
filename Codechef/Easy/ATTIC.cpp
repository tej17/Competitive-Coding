#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = s.size(),i;
		int ans = 0;
		int temp = 0,flag = 0;
		int sl = 0;
		vector<int> steps;
		for(i=0;i<n;i++)
		{
			while(s[i]=='.' && i<n)
			{
				flag = 1;
				temp++;
				i++;
			}
			if(flag==1)
			{
				//ans = max(ans,temp);
				steps.push_back(temp);
				temp = 0;
				flag = 0;
			}
		}
		n = steps.size();
		for(i=0;i<n;i++)
		{
			if(steps[i]>sl)
			{
				sl = steps[i];
				ans++;
			}
			//cout << steps[i] << " ";
		}
		cout << ans << endl;
	}
	return 0;
}