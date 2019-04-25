#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		cin >> k;
		if(k==0)
		{
			cout << 3 << endl;
			continue;
		}
		cout << 3 << ".";
		int num = 46870;
		int den = 33102;
		while(k--)
		{
			if(num>den)
			{
				cout << num/den;
				num = num%den;
				num = num*10;
			}
			else
			{
				num = num*10;
				cout << 0;
			}
		}
		cout << endl;
	}
	return 0;
}