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

void nextgreater(vector<int>num1,vector<int>num2){

    unordered_map<int,int>um;

    for(int i=0;i<num2.size();i++){
        um[num2[i]]=i;
    }
    stack<int>s;
    // Find next greatest element for all in num2
    vector<int>ans(num2.size(),-1);

    for(int i=0;i<num2.size();i++){
        while(!s.empty() && num2[i]>num2[s.top()]){
            int index=s.top();
            ans[index]=num2[i];
            s.pop();
        }
        s.push(i);
    }
    for(auto x:ans){
        cout<<x<<space;
    }
    vector<int>res(num1.size(),-1);
    for(int i=0;i<num1.size();i++){
        int index_in_num2 = um[num1[i]];

        res[i]= ans[index_in_num2];
    }

    for(auto x:res){
        cout<<x<<space;
    }

}

int main(int argc, char const *argv[])
{
    vector<int>num1{4,1,2};
    vector<int>num2{1,3,4,2};
    nextgreater(num1,num2);

    return 0;
}

