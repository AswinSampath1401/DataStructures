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

void findevensubs(string str){

    vector<int>v;
    for(int i=0;i<str.length();i++){
        int num = str[i]-'0';
        if(num%2==0)v.push_back(i);
    }
    map<int,vector<string>>m;
    int ans=0;
    int count=0;
    for(int slen:v){
        ans+=slen+1;
        /*for(int i=0;i<=slen;i++){
            ans++;
            //string s = str.substr(i,slen-i+1);
            //m[s.length()].push_back(s);
        }*/
    }
    cout<<ans<<" ";
    for(auto x:m){
        count+=x.second.size();
        for(auto v:x.second){
            //cout<<v<<" ";
        }
        //cout<<endl;
    }
    cout<<count<<endl;
}

int main(int argc, char const *argv[])
{
    string mystring = "93192487974659545273250";
    findevensubs(mystring);
    return 0;
}
