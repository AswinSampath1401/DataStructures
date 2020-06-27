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
//#define V 4

const int INF = 9999;
const ll MOD=1e9+7;
const int V=4;
void solve(){
    printf("Hello\n");
}

void floydWarshall(int graph[V][V]){

    int dist[V][V];
    int i,j,k;

    for(i=0;i<V;i++){
        for(j=0;j<V;j++)
        dist[i][j]=graph[i][j];
    }

    for(k=0;k<V;k++){
        for(i=0;i<V;i++){
            for(j=0;j<V;j++){
                if(dist[i][j]>dist[i][k] + dist[k][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }

    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            cout<<((dist[i][j]==9999)?-1:dist[i][j])<<space;
        }
        cout<<endl;
    }

}

int main(int argc, char const *argv[])
{
    int graph[V][V] = { {0, 5, INF, 10},  
                        {INF, 0, 3, INF},  
                        {INF, INF, 0, 1},  
                        {INF, INF, INF, 0}  
                    };  
    floydWarshall(graph);  
    return 0;
}

