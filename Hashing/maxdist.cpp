#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<math.h>
#include<algorithm>
using namespace std;



int findmaxdist(vector<int>v)
{
    unordered_map<int,int>um;

    int max_dist=0;

    for(int i=0;i<v.size();i++)
    {
        if(um.find(v[i])==um.end())
        um[v[i]]=i;

        max_dist = max(max_dist,i-um[v[i]]);
    }

    return max_dist;
}

int main(int argc, char const *argv[])
{
    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);

    cout<<findmaxdist(v)<<endl;

    return 0;
}
