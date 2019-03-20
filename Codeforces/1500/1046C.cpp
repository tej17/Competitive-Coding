#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,s,k=0;
	scanf("%d%d",&n,&m);
	int a[n],b[n];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++) scanf("%d",&b[i]);
	a[m]+=b[1],s=m-1;
	for(int i=2;i<=n&&s;i++) if(a[s]+b[i]<=a[m]) k++,s--;
	printf("%d",m-k);
	return 0;
}