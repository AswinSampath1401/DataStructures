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


void enqueue(int data,stack<ll> &s){

    s.push(data);
}

void dequeue(stack<ll> &s){
    stack<ll>temp;

    if(s.size()==1){
        s.pop();
        return;
    }

    if(s.size()==0){
        cout<<"Empty queue"<<endl;
        return;
    }

    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    temp.pop();

    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}

void printqueue(stack<ll> &s){

    if(s.size()==0)
    {cout<<"Empty \n";return;}
    
    vector<ll>v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    for(auto ele:v){cout<<ele<<space;}
    cout<<endl;

    for(ll i=v.size()-1;i>=0;i--){
        s.push(v[i]);
    }


}

int main(){
    
    FAST;
    stack<ll>s;

    enqueue(3,s);
    enqueue(5,s);
    enqueue(7,s);
    printqueue(s);
    dequeue(s);
    printqueue(s);
    dequeue(s);
    dequeue(s);
    printqueue(s);

    
    
    return 0;
}

