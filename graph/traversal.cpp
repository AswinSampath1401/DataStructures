/*
Competitive programming template
Author: Aswin Sampath

*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
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




void solve(){
    printf("Hello world \n");
}


void addEdge(vector<ll> adj[],ll u,ll v){
    adj[u].pb(v);
}

void printgraph(vector<ll>adj[],ll V){
    for(ll i=0;i<V;i++){
        for(auto x:adj[i]){
            cout<<x<<space;
        }
    }
}

void bfs(vector<ll> adj[],ll s,ll V){

    bool visited[V];
    memset(visited,false,sizeof(visited));

    queue<ll>q;

    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        cout<<q.front()<<space;
        ll s = q.front();

        for(auto x:adj[s]){
            if(!visited[x])
            {
                q.push(x);
                visited[x]=true;
            }
        }
        q.pop();
    }

}


void dfs(vector<ll> adj[],ll source,ll V){

    vector<bool>visited(V,false);

    stack<ll>s;

    s.push(source);

    while(!s.empty()){

        ll node = s.top();
        s.pop();

        if(!visited[node]){
            cout<<node<<space;
            visited[node]=true;
        }

        for(auto x:adj[node]){
            if(!visited[x]){
                s.push(x);
            }
        }
    }
}


int main(){
    FAST;
    ll V=7;
    vector<ll> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,1,3);
    addEdge(adj,3,5);
    addEdge(adj,0,2);
    addEdge(adj,2,4);
    addEdge(adj,0,6);

    bfs(adj,0,V);
    dfs(adj,0,V);
    return 0;
}

