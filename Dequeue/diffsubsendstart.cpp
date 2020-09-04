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

unordered_map<string,int>um;

bool string_start(string s,string start){
    for(int i=0;i<start.length();i++){
        if(s[i]!=start[i])return false;
    }
    return true;
}

bool string_end(string s,string end){

    reverse(s.begin(),s.end());
    reverse(end.begin(),end.end());
    return string_start(s,end);
}

void print_start_end_with(string s,string start,string end){

    for(int len=1;len<=s.length();len++){
        for(int i=0;i<=s.length()-len;i++){
            string temp = s.substr(i,len);
            //cout<<temp<<" "<<string_start(temp,start)<<" "<<string_end(temp,end)<<"\n";
            if(string_start(temp,start) && string_end(temp,end))um[temp]++;
        }
       // cout<<endl;
    }

    for(auto x:um){
        cout<<x.first<<" "<<x.second<<"\n";
    }
}

int main(int argc, char const *argv[])
{
    string mystring ="vishakha";
    string start="h",end="a";
    print_start_end_with(mystring,start,end);
    return 0;
}

