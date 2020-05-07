#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
	ll a,n,k;
	scanf("%lld %lld %lld",&a,&n,&k);
	ll base = n+1;
	for(ll i=0;i<k;i++){
		printf("%d ",a%base);
		a/=base;
	}	
	return 0;
}