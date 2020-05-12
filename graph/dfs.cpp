/*
Competitive programming template
Author: Aswin Sampath

*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<ll>  vl;
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
#define pb(x) push_back(x)
const int MOD = 1000000007;

#define V 7
vl adj[V];


void solve(){
    printf("Hello world \n");
}


void addEdge(vl adj[],ll u,ll v){
    adj[u].pb(v);
    adj[v].pb(u);
}

void dfsutil(ll node,bool visited[]){

    visited[node]=true;
    cout<<node<<space;

    for(auto x:adj[node])
    {
        if(!visited[x]){
            dfsutil(x,visited);
        }
    }

}


void dfs(){
    
    
    bool visited[V+1];
    memset(visited,false,sizeof(visited));

    for(ll i=0;i<V;i++){
        if(!visited[i]){
            dfsutil(i,visited);
        }
    }

    
}


int main(){
    FAST;
    addEdge(adj,0,1);
    addEdge(adj,1,3);
    addEdge(adj,3,5);
    addEdge(adj,0,2);
    addEdge(adj,2,4);
    addEdge(adj,0,6);

    dfs();

    return 0;
}

