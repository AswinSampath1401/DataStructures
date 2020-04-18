#include<bits/stdc++.h>
using namespace std;

void printmat(int arr[][5],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        else{
            for (int j = 4; j>=k0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    int i,j,cnt=1;
    int arr[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[i][j]=cnt;
            cnt++;
        }
    }
    printmat(arr,5,5);
    return 0;
}
