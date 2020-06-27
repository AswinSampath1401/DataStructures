#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;

vpll graph[3000];

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;

        for(ll i=0;i<n;i++){
            graph[i].clear();
        }

        for(int i=0;i<m;i++){
            ll x,y,r;
            cin>>x>>y>>r;
            x--;
            y--;
            graph[x].push_back(make_pair(y,r));
            graph[y].push_back(make_pair(x,r));
        }

        ll s;
        cin>>s;
        s--;

        vector<ll>dist(n,INT_MAX);
        vector<bool>visited(n,false);
        dist[s]=0;

        priority_queue<pll,vpll,greater<pll>>pq;

        pq.push(make_pair(0,s));

        while(!pq.empty()){

            ll node = pq.top().second;

            pq.pop();

            if(visited[node]) continue;
            
            visited[node]=true;

            for(auto x:graph[node]){
                ll ver=x.first;
                ll edge=x.second;

                if(dist[ver]>dist[node]+edge){
                    dist[ver]=dist[node]+edge;
                    pq.push(make_pair(dist[ver],ver));
                }
            }
        }

        for(ll i=0;i<n;i++){
            if(i==s){
                continue;
            }

            if(dist[i]==INT_MAX){
                cout<<-1<<" ";
            }
            else{
                cout<<dist[i]<<" ";
            }
        }

        cout<<endl;


    }
    



    return 0;
}