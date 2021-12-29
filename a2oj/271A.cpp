#include <iostream>
#include <set>
using namespace std;

bool isUnique(int year) {

	set<int> s;
	while(year){
		s.insert(year%10);
		year=year/10;
	}
	if(s.size()==4) {
		return true;
	}
	return false;

}

int main() {
	int y;
	cin >> y;
	while(1){
		if(isUnique(++y)){
			cout << y << endl;
			break;
		}
	}
	return 0;
}