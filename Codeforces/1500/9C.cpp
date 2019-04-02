#include <bits/stdc++.h>
using namespace std;


long long int convertBin(int i, int n)
{
	int temp = i;
	long long int num = 0;
	int arr[10];
	int c = 0;
	while(temp)
	{
		int dig = temp%2;
		arr[c++] = dig;
		//num = num*10+dig;
		temp=temp/2;
	}
	for(int j = c-1;j>=0;j--)
	{
		num = num*10+arr[j];
	}
	if(num<=n)
		return num;
	return -1;
}


int main()
{
	int n;
	cin >> n;
	int count=0;
	//int lim = 1024;
	for(int i=1;i<=1024;i++)
	{

		long long int x = convertBin(i,n);
		//cout << i << endl;
		if(x!=-1){
			count++;
			//cout << i << endl;
		}
		else
			break;
	}
	cout << count << endl;
	return 0;
}