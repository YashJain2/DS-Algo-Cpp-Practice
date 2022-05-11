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

Node* sortedArrayBST(int arr[],int start, int end)
{
    if(start>end)
        return NULL;
    int mid = (start+end)/2;
    Node* root= new Node(arr[mid]);
    root->left = sortedArrayBST(arr,start,mid-1);
    root->right = sortedArrayBST(arr,mid+1,end);
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
    int a[]={10,20,30,40,50};
    Node* root = sortedArrayBST(a,0,4);
    pre(root);
    cout<<"\n";
    return 0;
} 
