#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i,x,mem=0;
		vector<int> v;
		cin >> n;
		for(i=0;i<n;i++){
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n;i++){
			if(v[i]>mem)
				break;
			else
				mem++;
		}
		cout << mem << endl;
	}
	return 0;
}