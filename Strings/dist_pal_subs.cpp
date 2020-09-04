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

void fun(string s){

    unordered_map<string,int>um;
    for(int i=0;i<s.length();i++){
        
        //Odd length
        for(int j=0;j<=i;j++){
            if(!s[i+j])break;
            if(s[i+j]==s[i-j])um[s.substr(i-j,2*j+1)]++;
            else break;
        }
        // Even length
        for(int j=0;j<=i;j++){
            if(!s[i+j+1])break;
            if(s[i+j+1]==s[i-j])um[s.substr(i-j,2*j+2)]++;
            else break;
        }
    }

    for(auto x:um){
        cout<<x.first<<" ";
    }
}

int main(int argc, char const *argv[])
{
    string s="aacddca";
    fun(s);
    return 0;
}
