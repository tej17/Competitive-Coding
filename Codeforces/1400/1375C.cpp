#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a,b,x;
		for(int i=0;i<n;i++) {
			cin >> x;
			if(i==0) {
				a = x;
			} else if(i==(n-1)) {
				b = x;
			}
		}
		if(a<b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}