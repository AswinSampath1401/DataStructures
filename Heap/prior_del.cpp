/*
Competitive programming template
Author: Aswin Sampath

*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef long double ld;
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
template<class T1> void deb(T1 e1)
{
    cout << e1 << endl;
}
template<class T1,class T2> void deb(T1 e1, T2 e2)
{
    cout << e1 << space << e2 << endl;
}
template<class T1,class T2,class T3> void deb(T1 e1, T2 e2, T3 e3)
{
    cout << e1 << space << e2 << space << e3 << endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1, T2 e2, T3 e3, T4 e4)
{
    cout << e1 << space << e2 << space << e3 << space << e4 << endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5)
{
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1, T2 e2, T3 e3, T4 e4 ,T5 e5, T6 e6)
{
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << space << e6 << endl;
}
/// Debug End




void solve(){

    priority_queue<ll>pq;
    vector<ll>v;
    for(ll i=0;i<10;i++)
    pq.push(i+1);

    while(pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }

    printf("Hello world \n");
}

int main(){
    FAST;
    priority_queue<ll,vector<ll>,greater<ll>>minpq;
    priority_queue<ll>maxpq;
    ld median = 0;
    testcase{
        ll ele;
        cin>>ele;
        
        if(ele<=median){
            maxpq.push(ele);
        }
        else{
            minpq.push(ele);
        }

        if(maxpq.size()>minpq.size()+1){
            minpq.push(maxpq.top());
            maxpq.pop();
        }
        if(minpq.size()>maxpq.size()+1){
            maxpq.push(minpq.top());
            minpq.pop();
        }
        
        if(maxpq.size()==minpq.size()){
            median = (ld)(maxpq.top()+minpq.top())/2;
        }
        if(maxpq.size()>minpq.size()){
            median = (ld)(maxpq.top());
        }
        if(minpq.size()>maxpq.size()){
            median = (ld)(minpq.top());
        }

        cout<<median<<endl;
    }


}

