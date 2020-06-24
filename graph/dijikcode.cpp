#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef priority_queue<pll,vector<pll>,greater<pll>()> pq_ll_min;


#define space " "
#define endl '\n'
#define FAST {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)


const int N=1e5;
const int INF=1e18+7;

vector<ll>adj[100005];
map<pll,ll> W;
vector<ll>d(100005,INF)
int p[100005];


int main(){

    FAST;

    ll n,m;
    cin>>n>>m;

    for(ll i=0;i<m;i++){

        ll u,v,w;
        cin>>u>>v>>w;
        u--;
        v--;

        adj[u].pb(v);
        adj[v].pb(u);

        W[mp(u,v)]=w;
        W[mp(v,u)]=w;

    }

    pq_ll_min pq;

    d[n-1]=0;
    p[n-1]=-1;

    q.push(mp(d[n-1],n-1));

    while(!q.empty()){
        ll u=q.top().second;
        q.pop();

        for(auto v:adj[u]){
            if(d[v]>d[u]+W[mp(u,v)]){

                p[v]=u;
                d[v]=d[u]+W[mp(u,v)];
                q.push(mp(d[v],v));
            }
        }
    }
    if(d[0]!=INF){

        ll s=0;
        while(s!=-1){
            cout<<s+1<<space;
            s=p[s];
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
