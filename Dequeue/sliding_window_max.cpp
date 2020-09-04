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

void slidingwindow(vector<int>v,int k){

    int n = v.size();
    deque<int>dq;
    int i;
    for(i=0;i<k;i++){
        while(!dq.empty() && v[i]>=v[dq.back()])dq.pop_back();
        dq.push_back(i);
    }

    for(;i<n;i++){

        cout<<v[dq.front()]<<" ";
        while(!dq.empty() && dq.front()<=i-k)dq.pop_front();
        while(!dq.empty() && v[dq.back()]<=v[i])dq.pop_back();
        dq.push_back(i);
    }
    cout<<v[dq.front()];
}

int main(int argc, char const *argv[])
{
    vector<int>v={12,15,1,2,3,4,5,9,15,6,7,8,3};
    int k=2;
    slidingwindow(v,k);
    return 0;
}

