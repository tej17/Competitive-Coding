#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int n = a.size(),ans=0;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1])
				ans+= (a[i]-a[i-1]);
			else if(a[i]<a[i-1])
				ans+= (26-a[i-1]+a[i]);
			ans++;
		}
		ans+=2;
		if(11*n>=ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}