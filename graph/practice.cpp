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
const ll N=7;

vector<ll>graph[N];


void solve(){
    printf("Hello\n");
}

void addEdge(ll u,ll v){
    graph[u].push_back(v);
    graph[v].pb(u);
}

void bfs(ll s){

    cout<<"BFS"<<endl;
    queue<ll>q;
    vector<bool>visited(N,false);

    q.push(s);
    visited[s]=true;

    while(!q.empty()){

        ll temp = q.front();
        cout<<temp<<space;
        q.pop();

        for(auto x:graph[temp]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }

    }
    cout<<endl;
}

void dfs(ll source){

    cout<<"DFS"<<endl;

    stack<ll>s;
    vector<bool>visited(N,false);
    s.push(source);
    visited[source]=true;

    while(!s.empty()){
        ll temp = s.top();
        cout<<temp<<space;
        s.pop();

        for(auto x:graph[temp]){
            if(!visited[x]){
                s.push(x);
                visited[x]=true;
            }
        }
    }
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    //BFS
    addEdge(0,1);
    addEdge(0,2);
    addEdge(0,3);
    addEdge(1,4);
    addEdge(1,5);
    addEdge(3,6);
    bfs(0);
    dfs(0);
    return 0;
}

