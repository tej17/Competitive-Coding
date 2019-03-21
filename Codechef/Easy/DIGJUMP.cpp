#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define pu push
using namespace std;
ll n,m,x,y;
vector<ll> adj[10];
ll ans[100005]={0};
bool vis[100005];
queue <ll> q;

int main()
{	
	string st;
	cin>>st;
	n=st.length();
	
	for(ll i=1;i<n;i++)
	{	adj[st[i]-'0'].pb(i);
	}
	
	ans[0]=0;
	q.pu(0);
	vis[0]=true;
	
	while(!q.empty())
	{	ll v=q.front();
		if(v==n-1)
			break;
		
		q.pop();
		
		ll val=st[v]-'0';
		ll vals=adj[val].size();
		
		for(ll j=0;j<vals;j++){	
			int nidx=adj[val][j];
			if(!vis[nidx])
			{	vis[nidx]=true;
				q.pu(nidx);
				ans[nidx]=ans[v]+1;
			}
		}
		adj[val].clear();
		if(v>0 && vis[v-1]==false)
		{	vis[v-1]=true;
			q.pu(v-1);
			ans[v-1]=ans[v]+1;
		}
		if(v<n-1 && vis[v+1]==false)
		{	vis[v+1]=true;
			q.pu(v+1);
			ans[v+1]=ans[v]+1;
		}
	}
	
	cout<<ans[n-1]<<endl;
}	