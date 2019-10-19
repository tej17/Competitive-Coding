#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	stack<char> st;
	cin >> s;
	int n = s.size();
	st.push('{');
	for(int i=0;i<n;i++){
		if(s[i]==st.top()){
			st.pop();
		}
		else{
			st.push(s[i]);
		}
	}
	string f ="";
	while(!st.empty()){
		if(st.top()=='{')
			st.pop();
		else{
			f+= st.top();
			st.pop();
		}
	}
	reverse(f.begin(),f.end());
	cout << f << endl;
	return 0;
}