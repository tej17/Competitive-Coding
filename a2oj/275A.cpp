#include <iostream>
using namespace std;

int main() {
	int a[5][5] = {0};
	int b[5][5];
	int x;
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<4;i++){
		string row;
		for(int j=1;j<4;j++){
			b[i][j] = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1];
			if(b[i][j]%2==0){
				row+="1";
			} else {
				row+="0";
			}
		}
		cout << row << endl;
	}

	return 0;
}