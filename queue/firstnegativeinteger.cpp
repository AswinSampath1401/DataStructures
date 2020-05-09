#include<bits/stdc++.h>
using namespace std;

void firstnegint(int arr[],int n,int k);

void firstnegint(int arr[],int n,int k)
{
    deque<int>dq;
    int i;

    for(i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }
    for(;i<n;i++){

        if(!dq.empty())
        cout<<arr[dq.front()]<<" ";
        else
        {
            cout<<"No negative in this window"<<endl;
        }
        

        //Remove element from window
        while((!dq.empty()) && dq.front()<=i-k+1){
            dq.pop_front();
        }

        if(arr[i]<0){
            dq.push_back(i);
        }

    }
    if(!dq.empty())
        cout<<arr[dq.front()]<<" ";
        else
        {
            cout<<"No negative in this window"<<endl;
        }
    
}


int main(){
    
    int a[12]={-2,3,4,5,-4,-3,-8,1,2,5,-10,8};
    firstnegint(a,12,3);
    return 0;
}