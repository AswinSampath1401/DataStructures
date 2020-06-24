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

void solve(){
    printf("Hello\n");
}

int main(int argc, char const *argv[])
{
    deque<ll>dq;
    for(ll i=1;i<=6;i++){
        dq.push_back(10*i);
    }

    ll k=3;

    deque<ll>dq2;

    while(k--){
        ll ele = dq.front();
        dq.pop_front();
        dq2.push_back(ele);
    }

    while(!dq2.empty()){
        ll ele = dq2.front();
        dq.push_front(ele);
        dq2.pop_front();
    }
    
    while(!dq.empty()){
        cout<<dq.front()<<space;
        dq.pop_front();
    }
    cout<<endl;
    return 0;
}

