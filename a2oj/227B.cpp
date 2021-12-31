#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	int n,x;
	cin >> n;
	unordered_map<int,int> mpVasya;
	unordered_map<int,int> mpPetya;

	for(int i=0;i<n;i++) {
		cin >> x;
		mpVasya[x] = i+1;
		mpPetya[x] = n-i;
	}

	long long int cntVasya = 0, cntPetya = 0;
	int m;
	cin >> m;
	for(int j=0;j<m;j++) {
		cin >> x;
		cntVasya+=mpVasya[x];
		cntPetya+=mpPetya[x];
	}
	cout << cntVasya << " " << cntPetya << endl;

	return 0;
}