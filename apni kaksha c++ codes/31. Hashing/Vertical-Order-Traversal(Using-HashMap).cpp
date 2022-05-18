#include<bits/stdc++.h>
using namespace std;


#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i = a;i<b;i++)
#define ff first
#define ss second

struct Node
{
    int key;
    Node *left,*right;
    Node(int val)
    {
        key = val;
        left = right = NULL;
    }
};

Node* newNode(int key)
{
    Node* node = new Node(key);
    return node; 
}

void getVerticalOrder(Node* root, int horDist, map<int,vi> &m)
{
    if(root==NULL)
        return;
    m[horDist].push_back(root->key);
    getVerticalOrder(root->left,horDist-1,m);
    getVerticalOrder(root->right,horDist+1,m);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);
    map<int,vi> m;
    int horDist = 0;
    getVerticalOrder(root,horDist,m);
    map<int,vi> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        for(int i=0;i<(it->ss).size();i++)
        {
            cout<< (it->ss)[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}