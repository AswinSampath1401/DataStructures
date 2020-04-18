#include<bits/stdc++.h>
using namespace std;



/*void slidewindowmax(int a[10],int k)
{
    deque<int>dq(k);

    int i;
    for(i=0;i<k;i++){

        while((!dq.empty()) && a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }

    for(;i<10;i++)
    {
        cout<<a[dq.front()]<<" ";

        while((dq.empty()) && dq.front()<=i-k)
        {
            dq.pop_front();
        }

        while ((!dq.empty())&& a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }
    cout<<a[dq.front()]<<" ";
    cout<<endl;
}*/

void slidewindowmax(int a[],int k)
{
    deque<int>dq(k);
    int i;
    for(i=0;i<k;i++)
    {
        while((!dq.empty()) && a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(;i<10;i++)
    {
        cout<<a[dq.front()]<<" ";
        while((!dq.empty()) && dq.front()<=i-k){
            dq.pop_front();
        }
        while((!dq.empty()) && a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<a[dq.front()];
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    int a[10] = {3,1,2,4,7,8,6,5,9,10};
    slidewindowmax(a,7);
    return 0;
}
