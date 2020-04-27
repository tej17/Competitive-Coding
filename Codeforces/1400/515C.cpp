#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,i,x;
	cin >> n;
	string a;
	cin >> a;
	vector<int> digits;
	for(i=0;i<n;i++){
		x = a[i]-'0';
		switch(x){
			case 0: break;
			case 1: break;
			case 2: digits.push_back(2); break;
			case 3: digits.push_back(3); break;
			case 4: digits.push_back(3); digits.push_back(2); digits.push_back(2); break;
			case 5: digits.push_back(5); break;
			case 6: digits.push_back(5); digits.push_back(3); break;
			case 7: digits.push_back(7); break;
			case 8: digits.push_back(7); digits.push_back(2); digits.push_back(2); digits.push_back(2); break;
			case 9: digits.push_back(7); digits.push_back(3); digits.push_back(3); digits.push_back(2); break;
		}
	}
	sort(digits.begin(),digits.end());
	int k = digits.size();
	for(i = k-1;i>=0;i--)
		cout << digits[i];
	cout << endl;
	return 0;
}