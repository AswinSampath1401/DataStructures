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

const ll INF = 1e18+7;
const ll MOD=1e9+7;
const int N=3000;

vector<pll> g[N];

void solve(){
    printf("Hello\n");
}

int main(int argc, char const *argv[])
{
    
    
    testcase{
        ll m,n;
        cin>>n>>m;

        for(ll i=0;i<n;i++)g[i].clear();

        for(ll i=0;i<m;i++){
            ll u,v,w;
            cin>>u>>v>>w;

            --u;
            --v;
            g[u].pb(mp(v,w));
            g[v].pb(mp(u,w));
        }

        ll s;
        cin>>s;
        --s;

        vector<bool>visited(n,false);
        vector<ll>dist(n,INF);

        dist[s]=0;

        //priority_queue<pair<long,long>,vector<pair<long,long>>,greater<pair<long,long>>> pq;

        priority_queue<pll,vector<pll>,greater<pll>> pq;

        pq.push(mp(0,s));

        while(!pq.empty()){

            ll d=pq.top().F;
            ll v=pq.top().S;

            pq.pop();

            if(visited[v])continue;

            visited[v]=true;

            for(auto x:g[v]){
                ll u= x.F;
                ll w=x.S;

                if(dist[v]+w<dist[u]){
                    dist[u]=dist[v]+w;
                    pq.push(mp(dist[u],u));
                }
            }

        }

        for(ll i=0;i<n;i++){
            if(i==s)continue;

            cout<<((dist[i]==INF)?-1:dist[i])<<space;
        }

        cout<<endl;



    }
    
    
    return 0;
}

