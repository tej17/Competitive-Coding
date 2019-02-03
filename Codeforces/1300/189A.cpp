#include <bits/stdc++.h>
using namespace std;
int dp[4001];
int findmax(int a,int b,int c,int d)
{
	//cout << a  << " " << b << " " << c << " " << d << endl;
	return max(max(max(a,b),c),d);
}

int val(int x)
{
	if(x<0)
		return INT_MIN;
	else
		return dp[x];
}

int main()
{
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	for(int i=0;i<n;i++)
	{
		dp[i] = INT_MIN;
	}
	dp[c] = dp[b] = dp[a] = 1;
	for(int i=0;i<(n+1);i++)
	{
		dp[i] = findmax(val(i),(val(i-a)+val(a)),(val(i-b)+val(b)),(val(i-c)+val(c)));
	}
	cout << dp[n] << endl;
	return 0;
}