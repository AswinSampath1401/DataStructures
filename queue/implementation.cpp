#include<bits/stdc++.h>
using namespace std;

/*
Functions - empty(),size(),push(),pop(),swap(),front(),back()
*/


int main(int argc, char const *argv[])
{
    queue<int> q;
    for(int i=0;i<5;i++){
        q.emplace(i+1);
    }
    cout<<q.size()<<endl;
    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    //     /* code */
    // }
    // cout<<endl;
    int initial_size=q.size();
    
    for (int i = 0; i <initial_size; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
    return 0;
}
