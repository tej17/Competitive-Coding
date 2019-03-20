#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,s,q,count=0;
	cin >> t >> s >> q;
	do
	{
		s=s*q;
		count++;
	}while(s<t);
	cout << count << endl;
	return 0;
}