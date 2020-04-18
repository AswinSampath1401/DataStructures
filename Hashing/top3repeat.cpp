#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<math.h>
#include<algorithm>
#include<climits>
using namespace std;


void top3Repeated(int a[],int n)
{

    if(n<3)
    {
        cout<<"Minimum 3 numbers"<<endl;
        return;
    }
    unordered_map<int,int>um;

    for(int i=0;i<n;i++)
    {
        um[a[i]]++;
    }

    pair<int,int> x,y,z;

    x.second=y.second=z.second=INT_MIN;

    for(auto curr:um)
    {
        if(curr.second>x.second)
        {
            z=y;
            y=x;

            x.second=curr.second;
            x.first=curr.first;
        }

        else if(curr.second>y.second)
        {
            z=y;

            y.second=curr.second;
            y.first=curr.first;
        }
        else if(curr.second>z.second)
        {
            z.second=curr.second;
            z.first=curr.first;
        }
        
    }
    cout<<"hello"<<endl;
    cout<<x.first<<":"<<x.second<<endl<<y.first<<":"<<y.second<<endl<<z.first<<":"<<z.second<<endl;
}


int main()
{
    int arr[] = { 3, 4, 2, 3, 16, 3, 15, 16, 15, 15, 16, 2, 3 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    top3Repeated(arr, n); 
    return 0;

}
