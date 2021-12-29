#include <iostream>
#include <vector>
using namespace std;

int main() {
	int inp, flag = 0;
	vector< vector <int> > matrix;
	for(int i=0;i<5;i++) {
		vector<int> row;
		for(int j=0;j<5;j++) {
			cin >> inp;
			if(inp==1) {
				cout << abs(2-i) + abs(2-j) << endl;
				flag=1;
				break;
			}
			row.push_back(inp);
		}
		if(flag==1) {
			break;
		}
		matrix.push_back(row);
	}


	return 0;
}