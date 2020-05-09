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




void solve(){
    printf("Hello world \n");
}

int main(){
    FAST;
    deque<ll>dq;
   vector<ll>v;
   ll opt;
   bool flag=true;

   cout<<"1 push \n 2 pop \n 3 print \n 4 exit\n";
    cin>>opt;

    while(flag){     
        switch(opt)
        {
        case 1: cout<<"Enter number:"<<endl;
                ll num; cin>>num;
                dq.push_front(num);
            break;
        case 2: dq.pop_front();
            break;
        case 3:
                if(dq.empty()){cout<<"Empty"<<endl;break;}
                while(!dq.empty()){v.push_back(dq.back()); dq.pop_back();}
                for(auto ele:v){cout<<ele<<" ";}
                for(auto e:v){dq.push_front(e);}
                v.clear();
                break;
        case 4:flag=false;
        default:
            break;
        }
        cout<<"1 push 2 pop 3 print  4 exit\n";
        cin>>opt;
    }
    
    return 0;
}

