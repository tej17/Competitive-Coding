#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		map<char, int> mp;
		for(int i=0;i<n;i++)
			mp[s[i]]++;
		char choice[3] = {'R','S','P'};
		int m = INT_MIN;
		char ch;
		for(int i=0;i<3;i++) {
			if(mp[choice[i]] > m) {
				m = mp[choice[i]];
				ch = choice[i];
			}
		}
		string ans = "";
		for(int i=0;i<n;i++) {
			
			switch(ch) {
				case 'R': ans+='P'; break;
				case 'S': ans+='R'; break;
				case 'P': ans+='S'; break;
			}

		}
		cout << ans << endl;
		
	}
	return 0;
}