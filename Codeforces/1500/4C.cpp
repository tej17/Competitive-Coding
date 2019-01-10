#include <bits/stdc++.h>
#include <string>
using namespace std;

map<string,int> m;
int main()
{
	int n;
	cin >> n;
	//vector<string> ans;
	string x;
	for(int i=0;i<n;i++)
	{
		
		cin >> x;
		if(m[x]==0)
		{
			m[x]++;
			//ans.push_back("OK");
			cout << "OK" << endl;
		}
		else
		{
			cout << x << m[x] << endl;
			m[x]++;
		}
	}
	/*int s = ans.size();
	for(int j=0;j<s;j++)
	{
		cout << ans[j] << endl;
	}*/
	return 0;
}