/*
Competitive programming template
Author: Aswin Sampath

*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<ll> vl;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define testcase ll t;cin>>t; while(t--)
#define pb(x) push_back(x)
#define ss stringstream
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define pi 3.141592653589793
#define PI  acos(-1.0)
#define space " "

const int MOD = 1000000007;




void bfs(vl adj[],ll V, ll start){

    cout<<"BFS"<<endl;
    
    bool visited[V];
    ll cost[V];
    memset(visited,false,sizeof(visited));
    memset(cost,0,sizeof(cost));
    queue<ll>q;
    visited[start]=true;
    q.push(start);

    while(!q.empty()){

        //cout<<q.front()<<space;
        ll node = q.front();
        q.pop();
        for(auto x:adj[node]){
            if(!visited[x])
            {
                q.push(x);
                visited[x]=true;
            }
        }


    }

    for(auto ele:visited){

    }

    cout<<endl;

    // for(auto x:visited)
    // cout<<x<<space;
}

void addEdge(vl adj[],ll u,ll v){

    adj[u].pb(v);
}

void printGraph(vl adj[],ll V){
    for(ll i=0;i<V;i++){
        for(auto x:adj[i]){
            cout<<x<<space;
        }
        cout<<endl;
    }
}

int main(){
    FAST;
    /*ll V=5;
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,0);
    addEdge(adj,1,4);
    addEdge(adj,4,2);
    addEdge(adj,3,1);
    addEdge(adj,3,2);
    printGraph(adj,5);
    bfs(adj,V,0);
    bfs(adj,V,1);
    bfs(adj,V,2);
    bfs(adj,V,3);
    bfs(adj,V,4);
    // bfs(adj,V,1);*/

    testcase{
        ll n,m;
        cin>>n>>m;
        vl adj[n];
        for(ll i=0;i<m;i++){
            ll u,v;
            cin>>u>>v;
            addEdge(adj,u,v);
        }
        ll s;
        cin>>s;
        bfs(adj,n,s);
    }
   
     return 0;
}

