#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long int counter = 1;
vector<long long int> scc;

long long int power(long long int x, long long int y) 
{ 
    long long int res = 1; 
    x = x % MOD; 
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % MOD; 
  
        y = y>>1;  
        x = (x*x) % MOD;   
    } 
    return res; 
} 

void addEdge(vector<long long int> adj[], long long int u, long long int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
  
void DFSUtil(long long int u, vector<long long int> adj[], 
                    vector<bool> &visited) 
{ 
    visited[u] = true; 
    long long int n = adj[u].size();
    for (long long int i=0; i<n; i++) 
        if (visited[adj[u][i]] == false){ 
        	counter++;
            DFSUtil(adj[u][i], adj, visited);
        } 
} 
  
void DFS(vector<long long int> adj[], long long int V) 
{ 
    vector<bool> visited(V, false); 
    for (long long int u=1; u<=V; u++) 
        if (visited[u] == false){ 
            DFSUtil(u, adj, visited);
            scc.push_back(counter);
            counter = 1;
        } 
} 


int main()
{
	long long int n,k,i,u,v,x;
	cin >> n >> k;
	vector<long long int> adj[n+1]; 
	for(i=0;i<n-1;i++)
	{
		cin >> u >> v >> x;
		if(x==0)
		{
			addEdge(adj,u,v);
		}
	}
	DFS(adj, n);
	long long int s = scc.size();
	long long int ans = power(n,k)%MOD;
	for(long long int j=0;j<s;j++)
	{
		ans-= power(scc[j],k);
		ans+=MOD;
		ans%=MOD;
	}
	cout << ans << endl;
	return 0;
}