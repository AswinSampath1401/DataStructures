#include<bits/stdc++.h>
using namespace std;

void slidemaximum(int arr[],int n,int k);

void slidemaximum(int arr[],int n,int k){

    if(k>n){
        cout<<"K cannot be greater than n"<<endl;
        exit(1);
    }

    deque<int>dq;
    int i;

    for(i=0;i<k;i++){

        while((!dq.empty())&& arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(;i<n;i++){

        cout<<arr[dq.front()]<<" ";

        //Remove all those elements not in window
        while((!dq.empty())&& dq.front()<=i-k){
            dq.pop_front();
        }

        while((!dq.empty())&& arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";
    cout<<endl;
}

int main(){

    int a[12]={1,2,3,4,7,6,8};
    slidemaximum(a,7,4);
    return 0;

}