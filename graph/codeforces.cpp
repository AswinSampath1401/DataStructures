#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
 
using namespace std;
 
const ll INF = 1e18+7;
 
vector<int> adj[100005];
 
map<pii, ll> W;
 
vector<ll> d(100005, INF);
int p[100005];
 
int main()
{
    FAST
    
    int n, m; cin >> n >> m;
    
    for(int i = 0; i < m; i++)
    {
		int u,v,w; cin >> u >> v >> w;
		u--; v--;
		adj[u].pb(v);
		adj[v].pb(u);
		
		W[{u,v}] = w;
		W[{v,u}] = w;
	}
	
	priority_queue<pii, vector<pii>, greater<pii>> q;
	
	d[n-1] = 0;
	p[n-1] = -1;
	
	q.push({d[n-1], n-1});
	
	while(!q.empty())
	{
		int u = q.top().second;
		q.pop();
		
		for(int v : adj[u])
		{
			if(d[v] > d[u] + W[{u,v}])
			{
				p[v] = u;
				d[v] = d[u] + W[{u,v}];
				q.push({d[v], v});
			}
		}
		
	}
	
	if(d[0] != INF)
	{
		int s = 0;
		while(s != -1)
		{
			cout << s +1<< ' ';
			s = p[s];
		}
	}else
	{
		cout << -1 << '\n';
	}
	
    return 0;
}