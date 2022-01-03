#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m,sumAll=0,sumInd=0,x,a,b;
	cin >> n >> m;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> x;
		v.push_back(x);

	}
	for(int i=0;i<m;i++) {
		cin >> a >> b;
		sumInd = 0;
		for(int j=a-1;j<b;j++){
			sumInd+=v[j];
		}
		if(sumInd > 0) {
			sumAll+=sumInd;
		}
	}
	cout << sumAll << endl;
	return 0;
}