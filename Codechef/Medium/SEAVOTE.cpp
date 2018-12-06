#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x,n;
	cin>>t;
	while(t--){
		cin>>n;
		int sum=0;
		int den=n;
		for(int i=0;i<n;i++){
			cin>>x;
			sum += x;
			if(x==0) den--;
		}
		float error =  (1.0*(sum-100))/den;
		if(error < 0 || error>=1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
	return 0;
}