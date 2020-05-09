/*
Competitive programming template
Author: Aswin Sampath

*/

#include<bits/stdc++.h>
#include<unordered_set>
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


/// Functions 

string inttostr(ll x){
    return to_string(x);
}


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
    printf("Hello world \n");
    /*printf("Enter integer:\n");
    ll i;
    cin>>i;
    cout<<inttostr(i)<<endl;*/
    vector<ll>myvector;
    for(int i=0;i<5;i++)
    myvector.push_back(i);

    unordered_set<ll>myset(myvector.begin(),myvector.end());

    for(auto ele:myset){
        cout<<ele<<space;
    }
    cout<<endl;
}

int main(){
    FAST;
    testcase{
        solve();
    }
    return 0;
}

