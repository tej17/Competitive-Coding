#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000
#define LLI long long int

int main(){

	int N;
	LLI x;
	cin>>N;
	vector<LLI> v;
	for(int i=0;i<N;i++){
		cin>>x;
		v.push_back(x);
	}

	LLI count[100];
	for(int j=0;j<100;j++) count[j]=0;

	int i=1,power=0;
	while(i<=MAX){
		for(int j=0;j<v.size();j++){
			if((v[j] & i) == i){
				count[power]++;
			}
		}
		i *= 2;
		power+=1;
	}

	LLI sum = 0;i=1;
	for(int j=0;j<100;j++){
		sum += ((count[j]*(count[j]-1)/2)*i);
		i*=2;
	}
	cout<<sum<<endl;
	return 0;
}