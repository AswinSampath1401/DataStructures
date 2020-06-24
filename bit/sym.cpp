/*
Competitive programming template
Author: Aswin Sampath

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>

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

const ll INF = 1e18+7;
const ll MOD=1e9+7;

void solve(){
    printf("Hello\n");
}

int main(int argc, char const *argv[])
{
    testcase{
        vector<ll>v{10,5,4,8,6,4,2,4,6,7,1,5,6,9};
        ll n=v.size();
        ll index=7;
        cout<<getsumbit(index);
        
        solve();
    }
    return 0;
}

