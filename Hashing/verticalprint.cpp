#include<iostream>
#include<vector>
#include<map>
using namespace std;


struct Node
{
    int data;
    Node *left;
    Node *right;
};


struct Node* newNode(int key)
{
    struct Node* node = new Node();
    node->data=key;
    node->left=node->right=NULL;
    return node;
}

void getVertical(Node* root,int hd, map<int,vector<int>> &m)
{
    if(root==NULL)
    return;
    
    
    m[hd].push_back(root->data);

    getVertical(root->left,hd-1,m);
    getVertical(root->right,hd+1,m);
}

void printNode(Node *root)
{

    map<int,vector<int>>m;
    int hd=0;
    getVertical(root,hd,m);

    map<int,vector<int>>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        for(int i=0;i<it->second.size();i++)
        {
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
    
}


int main(int argc, char const *argv[])
{

    Node *root = newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    cout<<"Vertical Node print"<<endl;
    printNode(root); 
    return 0;
}
