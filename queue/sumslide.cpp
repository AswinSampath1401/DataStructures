/* Find min and max of each sub array 
Print the sum of min and max for each
*/
#include<bits/stdc++.h>
using namespace std;

void findsumslide(int a[],int n,int k){

    deque<int>maxdq(k),mindq(k);

    //First slide 
    int i;

    for(i=0;i<k;i++){

        while((!maxdq.empty()) && a[i]>=a[maxdq.back()]){
            maxdq.pop_back();
        }

        while((!mindq.empty()) && a[i]<=a[mindq.back()]){
            mindq.pop_back();
        }

        maxdq.push_back(i);
        mindq.push_back(i);
    }

    for(;i<n;i++){

        //cout<<"Max is:"<<a[maxdq.front()]<<" "<<"Min is:"<<a[mindq.front()]<<endl;
        cout<<"Sum is:"<<a[maxdq.front()]+a[mindq.front()]<<endl;


        while((!maxdq.empty()) && maxdq.front()<=i-k)
        {
            maxdq.pop_front();
        }
        while((!mindq.empty()) && mindq.front()<=i-k)
        {
            mindq.pop_front();
        }

        while((!maxdq.empty()) && a[i]>=a[maxdq.back()]){
            maxdq.pop_back();
        }

        while((!mindq.empty()) && a[i]<=a[mindq.back()]){
            mindq.pop_back();
        }

        maxdq.push_back(i);
        mindq.push_back(i);
    }


    //cout<<"Max is:"<<a[maxdq.front()]<<" "<<"Min is:"<<a[mindq.front()]<<endl;
    cout<<"Sum is:"<<a[maxdq.front()]+a[mindq.front()]<<endl;

}


int main(int argc, char const *argv[])
{

    int a[10]={3,1,2,4,7,8,6,5,9,3};
    findsumslide(a,10,3);
    return 0;
}

