#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin >> t;
	while(t--){
	long long int N,A,B,C,count=0;
	cin >> N >> A >> B >> C;
	long long int i,j;
	for(i=0;i<=A;i++){
		for(j=0;j<=B;j++){
			long long int x = N-i-j;
			if(N<(i+j))
				break;
			//cout << "(" << i << "," << j << "," << x << ")" << endl;
			count+=min(x+1,C+1);
		}
	}
	cout << count << endl;
	}
	return 0;
}