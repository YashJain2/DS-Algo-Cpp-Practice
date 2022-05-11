#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* constructBST(int preorder[],int* preorderIdx, int key,int mn, int mx,int n)
{
    if(*preorderIdx>=n)
        return NULL;
    Node* root = NULL;
    if(key> mn && key<mx)
    {
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;
        if(*preorderIdx<n)
        {
            root->left = constructBST(preorder,preorderIdx,preorder[*preorderIdx],mn,key,n);
        }
        if(*preorderIdx<n)
        {
            root->right = constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,mx,n);
        }
    }
    return root;
}


void pre (Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}

int main()
{
    int preOrder[]={10,2,1,13,11};
    Node* root = constructBST(preOrder,0,preOrder[0],INT_MIN,INT_MAX,5);
    pre(root);
    return 0;
} 
