#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define space " ";
#define endl '\n';
#define pb(x) push_back(x);

vector<ll>adj[1009];

void addEdge(ll u,ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}



int main(){

    ll t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>n>>m;
        for(ll i=0;i<n+3;i++)
        adj[i].clear();
        for(ll i=0;i<m;i++){
            ll u,v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        ll s;
        cin>>s;

        bool visited[n+1];
        memset(visited,false,sizeof(visited));
        ll dist[n+1];
        memset(dist,0,sizeof(dist));

        queue<ll>q;
        q.push(s);
        visited[s]=true;
        dist[s]=0;
        while(!q.empty()){

            ll u=q.front();
            q.pop();

            for(auto x:adj[u]){
                if(!visited[x]){
                    visited[x]=true;
                    dist[x]=dist[u]+6;
                    q.push(x);
                }
            }
        }

        for(ll i=1;i<=n;i++){

            if(i!=s){

                if(dist[i]==0){
                    cout<<-1<<space;
                }
                else{
                    cout<<dist[i]<<space;
                }
            }
        }
        cout<<endl;
    }
    return 0;

}