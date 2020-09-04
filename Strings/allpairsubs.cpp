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

int main(int argc, char const *argv[])
{
    vector<string> v = {"aab","abcac","dffe","ed","aa","aade"};

    map<vector<int>,int>m;
    int ans=0;
    for(string s:v){

        vector<int>freq(26,0);

        for(char c:s)freq[c-'a']++; // Frequency 
        for(int i=0;i<26;i++)freq[i]=freq[i]%2; // Pairty
        ans+=m[freq];  // add all elements belonging to that pairyt to ans 
        for(int i=0;i<26;i++){
            vector<int>count=freq;
            if(count[i]==0)count[i]=1;
            else count[i]=0;
            ans+=m[count];
        }
        m[freq]++;
    }
    cout<<ans<<"\n";
    return 0;
}

