#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define MOD 998244353
const int N = 200010;
using namespace std;



// array to store inverse of 1 to N
ll factorialNumInverse[N + 1];
 
// array to precompute inverse of 1! to N!
ll naturalNumInverse[N + 1];
 
// array to store factorial of first N numbers
ll fact[N + 1];
 
// Function to precompute inverse of numbers
void InverseofNumber(ll p)
{
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++)
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}
// Function to precompute inverse of factorials
void InverseofFactorial(ll p)
{
    factorialNumInverse[0] = factorialNumInverse[1] = 1;
 
    // precompute inverse of natural numbers
    for (int i = 2; i <= N; i++)
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
}
 
// Function to calculate factorial of 1 to N
void factorial(ll p)
{
    fact[0] = 1;
 
    // precompute factorials
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % p;
    }
}
 
// Function to return nCr % p in O(1) time
ll Binomial(ll N, ll R, ll p)
{
    // n C r = n!*inverse(r!)*inverse((n-r)!)
    ll ans = ((fact[N] * factorialNumInverse[R])
              % p * factorialNumInverse[N - R])
             % p;
    return ans;
}

int main() {
	ll t;
	InverseofNumber(MOD);
    InverseofFactorial(MOD);
    factorial(MOD);

	cin >> t;
	while(t--) {
		ll n,i,x,l,count=0,lessByTwoOrMore=0;
		cin >> n;
		vector<ll> v;
		for(i=0;i<n;i++){
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		if(v[n-1]==v[n-2]) {
			cout << fact[n]%MOD << endl;
		} else if (v[n-1]-v[n-2] > 1) {
			cout << 0 << endl;
		} else {
			for(i=0;i<n;i++){
				if(v[n-1]-v[i]>1) {
					lessByTwoOrMore++;
				}
			}
			ll acceptedRange = n-(1+lessByTwoOrMore);
			ll subtraction = 0;
			for(i=0;i<=lessByTwoOrMore;i++) {
				subtraction += (((Binomial(lessByTwoOrMore, i, MOD)%MOD * fact[acceptedRange+i]%MOD)%MOD * fact[lessByTwoOrMore-i]%MOD))%MOD;
			}
		cout << ((fact[n]%MOD - subtraction%MOD)+MOD)%MOD << endl;
		}

	}
	return 0;
}