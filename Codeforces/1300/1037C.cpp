#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,ans=0;
	cin >> n;
	string a,b;
	cin >> a;
	cin >> b;
	for(i=0;i<n-1;i++){
		if(a[i]!=b[i]){
			if(a[i]=='0' && b[i]=='1'){
				if(a[i+1]=='1' && b[i+1] =='0'){
					a[i+1] = b[i+1];
					i++;
				}
				a[i] = b[i];
				ans+=1;

			}
			else if(a[i]=='1' && b[i]=='0'){
				if(a[i+1]=='0' && b[i+1]=='1'){
					a[i+1] = b[i+1];
					i++;
				}
				a[i] = b[i];
				ans+=1;
			}
		}
	}
	if(a[n-2]==b[n-2] && a[n-1]!=b[n-1])
		ans++;
	cout << ans << endl;
	return 0;
}