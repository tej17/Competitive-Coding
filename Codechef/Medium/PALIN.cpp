/*
https://www.codechef.com/problems/PALIN
String manipulation
*/

#include<bits/stdc++.h>
using namespace std;

bool only9s(vector<int> v, int n){
	for(int i=0;i<n;i++)
		if(v[i]!=9)
			return false;
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<int> vec;
		for(char ch: s) vec.push_back(ch - '0');

		int len = s.length();
		if(only9s(vec,len)){
			cout<<1;
			for(int i=0;i<len-1;i++) cout<<0;
			cout<<1<<endl;
			continue;
		}

		int mid = len/2;
		int left = mid-1;
		int right = (len%2)? mid+1:mid;

		bool isSmall = false;
		while(left>=0 && vec[left]==vec[right]){
			left--;right++;
		}

		isSmall = (left<0 || vec[left]<vec[right]);

		while(left>=0){
			vec[right++] = vec[left--]; 
		}

		if(isSmall){
			int carry = 1;
			left = mid-1;
			if(len%2){
				vec[mid] += carry;
				carry = vec[mid]/10;
				vec[mid] %= 10;
			}
			right = (len%2)? mid+1:mid;
			while(left>=0){
				vec[left] += carry;
				carry = vec[left]/10;
				vec[left] %= 10;
				vec[right++]=vec[left--];
			}

		}
		for(int i: vec)
			cout<<i;
		cout<<endl;
	}
	return 0;
}