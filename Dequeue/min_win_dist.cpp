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

void findminwindow(string str){

    int n = str.length();
    unordered_map<char,int>um;
    for(char c:str)um[c]++;
    int total_dist= um.size();
    int dist=0;
    int start=0,start_index=-1,min_len=INT_MAX;
    vector<int>freq(256,0);

    for(int i=0;i<n;i++){

        freq[str[i]]++;
        if(freq[str[i]]==1)dist++;

        if(dist==total_dist){
            //Reduce the window

            while(freq[str[start]]>1){
                freq[str[start]]--;
                start++;
            }

            int mylen = i-start+1;

            if(min_len>mylen){
                start_index=start;
                min_len=mylen;
            }
        }
    }

    cout<<str.substr(start_index,min_len)<<endl;

}

int main(int argc, char const *argv[])
{
    string str = "aabcbcdbca"; 
    findminwindow(str);
    return 0;
}
