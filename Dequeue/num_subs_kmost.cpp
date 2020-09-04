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

void findsubs(string str,int k){

    int right=0,left=0;
    vector<int>freq(256,0);
    int count=0;
    for(;right<str.length();right++){

        freq[str[right]]++;

        while(freq[str[right]]>k){
            freq[str[left]]--;
            left++;
        }
        count+=right-left+1;
    }

    cout<<count<<endl;

}

int main(int argc, char const *argv[])
{
    string mystring= "aaabb";
    int k=2;
    findsubs(mystring,k);
    return 0;
}

