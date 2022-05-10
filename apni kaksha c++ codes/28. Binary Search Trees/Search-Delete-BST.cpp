#include<iostream>
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

Node* searchBST(Node* root,int val)
{
    if(root==NULL)
        return NULL;
    if(root->data == val)
        return root;
    //data>key
    if(root->data>val)
        return searchBST(root->left,val);
    else    
        return searchBST(root->right,val); 
}

void inorder (Node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
    if(searchBST(root,30)==NULL)
        cout<<"Value not present\n";
    else
        cout<<"Value found\n";
    return 0;
} 