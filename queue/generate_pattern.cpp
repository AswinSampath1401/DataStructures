#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll findseq(int n)
{
    queue<ll>q;
    queue<ll>fq;
    q.push(1);
    fq.push(1);
    while(n--){
        ll x = q.front();
        q.push(x*10);
        q.push(x*10 + 1);
        fq.push(x*10);
        fq.push(x*10 +1);
        q.pop();
    }

    while(!fq.empty()){
        cout<<fq.front()<<" ";
        fq.pop();
    }
    cout<<endl;
    return q.front();

}

int main(){
    
    cout<<findseq(10)<<endl;
    return 0;
}