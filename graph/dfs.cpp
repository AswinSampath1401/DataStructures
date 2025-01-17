/*
Competitive programming template
Author: Aswin Sampath

*/


#include<bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef vector<ll>vl;
typedef vector<int>vi;
typedef priority_queue<ll,vl,greater<ll>()> pq_ll_min;
typedef priority_queue<ll> pq_ll_max; 
typedef stack<ll> s;
typedef queue<ll> q;
const int N=5;

#define pi 3.141592653589793
#define PI  acos(-1.0)
#define space " "
#define endl '\n'
#define F first
#define S second
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)

#define FAST {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define testcase ll t;cin>>t;while(t--)
#define dbxstl(x){for(auto ele:x)cout<<ele<<space; cout<<endl;}
#define dbxval(x){cout<<x<<endl;}

const ll INF = 1e18+7;
const ll MOD=1e9+7;

void solve(){
    printf("Hello\n");
}
vl g[N];

void addEdge(ll u,ll v){
    g[u].push_back(v);
    g[v].push_back(u);
}

void dfs(){

    vector<bool>visited(N,false);
    stack<ll>s;

    s.push(0);
    visited[0]=true;

    while(!s.empty()){
        ll node = s.top();
        cout<<node<<space;
        s.pop();

        for(auto x:g[node]){
            if(!visited[x]){
                s.push(x);
                visited[x]=true;
            }
        }
    }
}

int main(int argc, char const *argv[])
{

    addEdge(0,2);
    addEdge(0,1);
    addEdge(1,3);
    addEdge(2,3);
    addEdge(3,4);

    dfs();


    
    return 0;
}

