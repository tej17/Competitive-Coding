#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main() {
	long long int n,x;
	cin >> n;
	vector<long long int> v;
	for(int i=0;i<9;i++) {
		cin >> x;
		v.push_back(x);
	}
	int count = 0;
	vector<long long int> finalArr;
	unordered_map<long long int, long long int> mp;
	for(int i=0;i<9;i++){
		int flag = 0;
		for(int j=i+1;j<9;j++) {
			if(v[i]>=v[j]) {
				flag = 1;
				break;
			}
		}
		if(flag==0) {
			if(v[i] < n) {
				finalArr.push_back(v[i]);
			} else {
				count++;
			}
			mp[v[i]] = i+1;
		}
	}
 
	if(finalArr.size()==0) {
		cout << -1 << endl;
		return 0;
	}
 
	long long int frequentDigit = mp[finalArr[0]], freq = n/finalArr[0], leftOver = n%finalArr[0], costToPaint = v[frequentDigit-1];

	// cout << "frequentDigit: " << frequentDigit << " freq: " << freq << " leftOver: " << leftOver << " costToPaint: " << costToPaint << endl;

	// for(int i=finalArr.size()-1;i>=0;i--) {
	// 	cout << finalArr[i] << " ";
	// }
	// cout << endl;

	for(int i=finalArr.size()-1;i>=0;i--) {
		while(leftOver >0 && ((costToPaint + leftOver) >= finalArr[i]) && finalArr[i]!=costToPaint) {
			cout << mp[finalArr[i]];
			freq--;
			leftOver = costToPaint + leftOver - finalArr[i];
		
		}
	}

	for(int i=0;i<freq;i++){
		cout << frequentDigit;
	}
	cout << endl;

	

	return 0;
}