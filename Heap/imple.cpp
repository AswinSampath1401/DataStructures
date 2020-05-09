/*
Competitive programming template
Author: Aswin Sampath

*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define testcase ll t;cin>>t; while(t--)
#define pb push_back
#define ss stringstream
#define mp make_pair
#define F first
#define S second
#define pi 3.141592653589793
#define PI  acos(-1.0)
#define space " "

const int MOD = 1000000007;


/// Debug Start
void debug(vector<int> &v){

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
/// Debug End




void solve(){

}

int main(){
    FAST;
    int query;
    cin>>query;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for(int i=0;i<query;i++){

        int type;
        cin>>type;

        if(type==1){
            //cout<<1<<endl;
            ll num;
            cin>>num;
            pq.push(num);
        }
        if(type==2){
            ll num;
            cin>>num;
            vector<ll>temp;
            while(!pq.empty()){
            temp.push_back(pq.top());
            pq.pop();
            }

            auto it = std::find(temp.begin(),temp.end(),num);
            if (it != temp.end()) {
                temp.erase(it);
            }

            for(auto i:temp)
            pq.push(i);

            temp.clear();
                
        }
        if(type==3){
            //cout<<3<<endl;
            cout<<pq.top()<<endl;
        }
    }

    return 0;
}

