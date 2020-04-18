#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i,x,ans=0;
		cin >> n;
		vector<int> v;
		vector<int> target;
		for(i=0;i<n;i++){
			cin >> x;
			v.push_back(x);
		}
		target.push_back(v[0]);
		for(i=1;i<n;i++)
			target.push_back(max(v[i],target[i-1]));
		for(i=0;i<n;i++){
			ans = max(ans, int(ceil(log2(target[i]-v[i]+1))));
			// cout << i << " " << ans << endl;
		}
		cout << ans << endl;
	}
	return 0;
}