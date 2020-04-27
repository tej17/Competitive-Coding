#include <bits/stdc++.h>
using namespace std;



int main(){
	long long int n;
	cin >> n;
	long long int x,i,g,count = 0;
	cin >> x;
	g = x;
	for(i=0;i<n-1;i++){
		cin >> x;
		g = __gcd(g,x);
	}
	for(i=1;i<=sqrt(g);i++){
		if(g%i==0){
			if(g/i == i){
				count++;
			}
			else{
				count+=2;
			}
		}
	}
	cout << count << endl;
	return 0;
}