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
typedef priority_queue<pll,vector<pll>,greater<pll>> pq_pll_min;
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
#define V 7

const ll INF = 1e18+7;
const ll MOD=1e9+7;
const int N= 3000;
const int R = 1e5;
void solve(){
    printf("Hello\n");
}


vector<pair<ll,ll>>g[N];


int main(int argc, char const *argv[])
{

    // g[0].push_back(1);
    // g[0].push_back(2);
    // g[0].push_back(6);
    // g[1].push_back(3);
    // g[3].push_back(5);
    // g[2].push_back(4);
    // bfs(0);
    // dfs(0);

    testcase{


        ll n,m;
        cin>>n>>m;

        assert(n>=2 && n<=3000);
        assert(m>=1 && m<=N*(N-1)/2);

        for(ll i=0;i<n;i++){
            g[i].clear();
        }

        for(ll i=0;i<m;i++){
            ll x,y,r;
            cin>>x>>y>>r;
            assert(x>=1 && x<=N);
            assert(y>=1 && y<=N);
            assert(r>=1 && r<=R);

            x--;
            y--;

            g[x].pb(mp(y,r));
            g[y].pb(mp(x,r));
        }

        ll s;
        cin>>s;
        s--;
        assert(s>=1 && s<=N);
        
        pq_pll_min pq;

        pq.push(mp(0,s));

        vector<bool>visited(N,false);
        vector<ll>dist(N,INF);
        dist[s]=0;

        while(!pq.empty()){

            ll d = pq.top().F;
            ll v = pq.top().S;

            pq.pop();

            if(visited[d]){
                continue;
            }

            visited[d]=true;

            for(auto x:g[v]){

                ll w = x.S;
                ll u=x.F;

                if(w+dist[v]<dist[u]){
                    dist[u]=w+dist[v];
                    pq.push(mp(dist[u],u));
                }
                
            }
        }

        for(ll i=0;i<n;i++){
            if(i==s)continue;

            cout<<(dist
        }

    }



    return 0;
}

