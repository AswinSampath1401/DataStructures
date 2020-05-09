/*
Competitive programming template
Author: Aswin Sampath

*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define testcase ll t;cin>>t; while(t--)
#define pb push_back
#define ss stringstream
#define mp make_pair
#define F first
#define S second
#define pi 3.141592653589793
#define PI  acos(-1.0)
#define space " "

const int MOD = 1000000007;

///Debug start



/// Debug End

bool check(ll ele,ll k){
    
    return ele>=k;
}

void solve(){
    printf("Hello world \n");
}

int main(){
    FAST;
    ll n,k;
    cin>>n>>k;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    ll ops=0;
    ll num;
    for(ll i=0;i<n;i++){
        cin>>num;
        pq.push(num);
    }
    while(!check(pq.top(),k)){

        ll first = pq.top();
        pq.pop();
        ll second = pq.top();
        pq.pop();
        pq.push(1*first + 2*second);
        ops++;
    }
    cout<<ops<<endl;
    return 0;
}

