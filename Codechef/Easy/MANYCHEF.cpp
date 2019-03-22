#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
        cin>>s;
        long long int n=s.size(),i,j,k;
        
        if(n>=4)
        {
            i=n-4;
            while(i>=0)
            {
               ;
               if( (s[i]=='C'||s[i]=='?')&&(s[i+1]=='H'||s[i+1]=='?')&&(s[i+2]=='E'||s[i+2]=='?')&&(s[i+3]=='F'||s[i+3]=='?') ) 
               {
                   s.replace(i,4,"CHEF");
               }
               else 
               {
                    i=i+3;
                    if(s[i]=='?')
                     s[i]='A';
                }
             i=i-4;
            }
            for(i=0;i<4;i++)
             if(s[i]=='?')
              s[i]='A';
        }
        else 
        {
            for(i=0;i<n;i++)
             if(s[i]=='?')
              s[i]='A';
        }
        cout<<s<<endl;
	}
	return 0;
}