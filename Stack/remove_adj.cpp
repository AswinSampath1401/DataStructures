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

void removeele(stack<pair<char,int>>s,int k){
    while(k--){
        s.pop();
    }
}

int main(int argc, char const *argv[])
{
    string str= "deeedbbcccbdaa";
    int k = 3;

    stack<pair<char,int>>s;

    for(int i=0;i<str.length();i++){

        if(!s.empty()){

            if(str[i]==s.top().first){
                s.push(mp(str[i],s.top().second+1));
            }
            else{
                s.push(mp(str[i],0));
            }

            if(s.top().second==k-1){
                int temp=k;
                cout<<"Matched"<<endl;
                while(temp--){
                    s.pop();
                }
                
            }

        }
        else{
            s.push(mp(str[i],0));
        }

    }
    string ans="";

    while(!s.empty()){
        cout<<s.top().first<<space<<s.top().second<<endl;
        ans+=s.top().first;
        s.pop();
    }
    cout<<ans<<endl;
    return 0;
}

