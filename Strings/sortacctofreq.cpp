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

bool myfun(pair<int,string>p1,pair<int,string>p2){
    
    if(p1.first==p2.first)return p1.second<p2.second;
    return p1.first>p2.first;
}

void solve(vector<string>v){
    map<string,int>m;
    for(string s:v)m[s]++;
    vector<pair<int,string>>ans;
    for(auto x:m){
        ans.push_back({x.second,x.first});
    }
    sort(ans.begin(),ans.end(),myfun);
    for(auto x:ans){
        cout<<x.second<<" "<<x.first<<"\n";
    }
    
}

int main(int argc, char const *argv[])
{
    vector<string> v={"www.google.com", "www.fb.com", "www.twitter.com", "www.google.com","www.youtube.com","www.youtube.com"};
    solve(v);
    return 0;
}

