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




void solve(){
    printf("Hello world \n");
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
    ll V=4;
    vl adj[V];

    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);

    printGraph(adj,4);

   
     return 0;
}

