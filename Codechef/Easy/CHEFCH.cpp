#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       int i,n=s.length();
       int ct=0;
       int cta=0,ctb=0;
           for(i=0;i<n;i++){
               if(i%2==1 && s[i]=='+'){
                   cta++;
               }
               if(i%2==0 && s[i]=='-'){
                   cta++;
               }
           }
           for(i=0;i<n;i++){
               if(i%2==1 && s[i]=='-'){
                   ctb++;
               }
               if(i%2==0 && s[i]=='+'){
                   ctb++;
               }
           }
       cout<<min(cta,ctb)<<endl;
    }
}