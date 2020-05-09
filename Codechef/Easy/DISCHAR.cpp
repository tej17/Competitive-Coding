#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int n = a.size(),i;
		set<char> s;
		for(i=0;i<n;i++){
			s.insert(a[i]);
		}
		cout << s.size() << endl;
	}
	return 0;
}