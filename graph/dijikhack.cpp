/*
Competitive programming template
Author: Aswin Sampath

*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq_pl_min;
typedef priority_queue<pair<ll,ll>> pq_pl_max;


#define space " "
#define endl '\n'
#define pi 3.141592653589793
#define PI  acos(-1.0)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define FAST {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define testcase ll t; cin>>t; while(t--)



const int INF=1e9;
const int MOD=1e9+7;

const int N=3000;
const int R=1e5;



vector<pl>g[N];
void solve(){
    printf("Hello\n");
}


int main(int argc, char const *argv[])
{
    FAST;
    testcase{

        vector<bool>visited(N,false);
        vector<long>dist(N,INF);


        ll n,m;
        cin>>n>>m;
        
        // assert(2<=n && n<=N);
        // assert(1<=m && m<=N*(N-1)/2);

        for(ll i=0;i<n;i++)g[i].clear();

        for(ll i=0;i<m;i++){
            ll u,v,w;
            cin>>u>>v>>w;

            // assert(1<=u && u<=N);
            // assert(1<=v && v<=N);
            // assert(1<=w && w<=R);

            --u;--v;

            g[u].pb(mp(v,w));
            g[v].pb(mp(u,w));
        }

        ll s;
        cin>>s;
        // assert(1<=s && s<=N);
        --s;
        dist[s]=0;
        pq_pl_min pq;

        pq.push(mp(0,s)); // Pair - (Distance,Vertex)

        while(!pq.empty()){

            ll d = pq.top().first;
            ll v = pq.top().second;

            pq.pop();

            if(visited[v])continue;

            visited[v]=true;

            for(auto x:g[v]){
                
                ll u=x.first;
                ll w=x.second;

                if(dist[v]+w<dist[u]){
                    dist[u]=dist[v]+w;
                    pq.push(mp(dist[u],u));
                }

            }

        }

        for(ll i=0;i<n;i++){
            if(i==s)continue;
            cout<<((dist[i]!=INF)?dist[i]:-1)<<space;
        }

        cout<<endl;

    }
    return 0;
}

