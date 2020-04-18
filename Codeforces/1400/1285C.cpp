#include <bits/stdc++.h>
using namespace std;


int main(){
	long long int x,i,j,n,ans=LLONG_MAX,temp,a,b,flag=0;
	cin >> x;
	if(x==1) cout << 1 << " " << 1 << endl;
	else{
		for(i=1;i<=sqrt(x);i++){
			if(x%i==0){
				long long int l,m;
				l = x/i;
				m = i;
				long long int g = __gcd(l,m);
				if(l*m/g == x){
					temp = min(ans,max(l,m));
					if(temp<ans){
						ans = temp;
						a = l;
						b = m;
					}
				}
			}
		}
		if(a<b)cout << a << " " << b << endl;
		else cout << b << " " << a << endl;
	}
	return 0;
}