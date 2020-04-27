#include <bits/stdc++.h>
using namespace std;

long long int kadanes(vector<long long int> arr){
	long long int currsum =0, globalsum = LLONG_MIN,i,n=arr.size();
	for(i=0;i<n;i++){
		currsum += arr[i];
		if(globalsum < currsum)
			globalsum = currsum;
		if(currsum<0)
			currsum = 0;
	}
	return globalsum;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n,i,x,sumy=0;
		cin >> n;
		vector<long long int> cc;
		vector<long long int> ccl;
		vector<long long int> ccr;
		for(i=0;i<n;i++){
			cin >> x;
			sumy+=x;
			cc.push_back(x);
			if(i!=n-1)
				ccl.push_back(x);
			if(i!=0)
				ccr.push_back(x);
		}
		long long int suma1 = kadanes(ccl);
		long long int suma2 = kadanes(ccr);
		long long int suma = max(suma1,suma2);
		if(suma>=sumy)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

	}
	return 0;
}