#include <bits/stdc++.h>
#define size 1000000000
using namespace std;

int main()
{
	long long int a[size+5];
    a[0]=0;
    for(long long int i=1;i<=size;i++)
    {
        if(a[i/2]+a[i/3]+a[i/4]<i)
            a[i]=i;
        else
            a[i]=a[i/2]+a[i/3]+a[i/4];
    }
    long long int n;
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}