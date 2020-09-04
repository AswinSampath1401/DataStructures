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

void find(vector<int>v,int k){

    // Find maximum of all minimum in sliding window
    deque<int>dq;
    int i;
    for(i=0;i<k;i++){
        while(!dq.empty() && v[i]<=v[dq.back()])dq.pop_back();
        dq.push_back(i);
    }
    int n=v.size();
    vector<int>ans;
    for(;i<n;i++){
        ans.push_back(v[dq.front()]);
        //Remove index
        while(!dq.empty() && dq.front()<=i-k)dq.pop_front();

        while(!dq.empty() && v[i]<=v[dq.back()])dq.pop_back();

        dq.push_back(i);
    }
    ans.push_back(v[dq.front()]);
    for(int ele:ans){
        cout<<ele<<" ";
    }
}

void countsort(int arr[],int n){
    int freq[3];
    memset(freq,0,sizeof freq);
    int o[n];
    for(int i=0;i<n;i++)freq[arr[i]]++;

    for(int i=1;i<3;i++)freq[i]+=freq[i-1];

    for(int i=0;i<n;i++){
        arr[freq[arr[i]]-1]=arr[i];
        --freq[arr[i]];
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    vector<int>v={1,2,3,4,7,6,8};
    int k=3;
    //find(v,k);
    int arr[10]={0,0,1,2,0,1,2,0,2,1};
    countsort(arr,10);
    return 0;
}

