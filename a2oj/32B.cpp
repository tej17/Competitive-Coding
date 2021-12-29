#include <iostream>
using namespace std;

int main() {

	string s;
	string ans;
	cin >> s;
	int n = s.size();
	for(int i=0;i<n;i++) {
		if(s[i] == '.') {
			ans+='0';
		} else if(s[i]=='-' && s[i+1]=='.'){
			ans+='1';
			i++;
		} else if(s[i]=='-' && s[i+1]=='-'){
			ans+='2';
			i++;
		} 
	}
	cout << ans << endl;
	return 0;
}