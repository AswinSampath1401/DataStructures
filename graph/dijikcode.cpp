#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pl;
typedef priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq_pl_min;
typedef priority_queue<pair<long,long>> pq_ll_max;


#define space " "
#define endl '\n'
#define F first
#define S second
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define FAST ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
#define testcase ll t;cin>>t;while(t--)

const int N=1e5;
const int INF=1e9;

vector<pl>g[N+1];


int main(){

    ll n,m;
    cin>>n>>m;
    assert(2<=n && n<=N);
    assert(0<=m && m<=N);

    for(ll i=0;i<m;i++){
        ll a,b,w;
        cin>>a>>b>>w;

        assert(1<=a && a<=n);
        assert(1<=b && b<=n);
        assert(1<=w && w<=1e6);

        g[a].pb(mp(b,w));
        g[b].pb(mp(a,w));
    }

    pq_pl_min pq;

    ll s=1;

    pq.push(mp(0,s));

    vector<bool>visited(N,false);
    vector<long>dist(N,INF);

    dist[s]=0;

    while(!pq.empty()){

        ll d = pq.top().F;
        ll v=pq.top().S;

        pq.pop();

        if(visited[v])continue;

        visited[v]=true;

        for(auto x:g[v]){

            ll u=x.F;
            ll w=x.S;


            if(dist[v]+w<dist[u]){
                dist[u]=dist[v]+w;
                pq.push(mp(dist[u],u));
            }            
        }

    }

    for(ll i=1;i<n;i++){
        if(i==s)continue;
        cout<<((dist[i]!=INF)?dist[i]:-1)<<space;
    }
    cout<<endl;

    return 0;
}