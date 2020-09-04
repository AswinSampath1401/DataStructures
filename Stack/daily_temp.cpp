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

void brute_force(vector<int>temp){
    cout<<"Using Brute Force\n";
    int n = temp.size();
    vector<int>days_to_wait(n,-1);

    for(int day=0;day<n;day++){
        for(int next_day=day+1;next_day<n;next_day++){
            if(temp[next_day]>temp[day]){
                days_to_wait[day]=next_day-day;
                break;
            }
        }
    }
    for(int wait:days_to_wait){
        cout<<wait<<" ";
    }
    cout<<endl;
}

void stack_solve(vector<int>temp){

    cout<<"Using stack\n";
    int n = temp.size();
    stack<int>s;
    vector<int>output(n,-1);

    for(int day=0;day<n;day++){
        while(!s.empty() && temp[day]>temp[s.top()]){
            // If temparature is more than our previous days..
            //.Pop from the stack
            output[s.top()]=day-s.top();
            s.pop();
        }
        s.push(day); // Push our current day
    }
    for(int wait_days:output){
        cout<<wait_days<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    vector<int>temp = {73, 74, 75, 71, 69, 72, 76, 73};
    brute_force(temp);
    stack_solve(temp);
    return 0;
}

