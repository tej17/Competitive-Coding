/*
https://www.codechef.com/problems/NUMFACT
Maths, prime factors, probability
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x,n;
	cin>>t;
	while(t--){
		cin>>n;
		map<int,int> m;
		for(int j=0;j<n;j++){
			cin>>x;
			int i=2;
			while(x != 1){
				while(x%i==0 && i<=x){
					m[i]++;
					x = x/i;
				}
				i++;
			}
		}
		int count = 1;
		map<int,int>::iterator it = m.begin();
		while(it != m.end()){
			count *= (it->second + 1);
			it++;
		}
		cout<<count<<endl;
	}
	return 0;
}