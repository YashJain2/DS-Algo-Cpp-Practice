#include<bits/stdc++.h>
using namespace std;

//tree data structure
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    //constructor function for the node
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node* root)
{
    if(root-> left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root)
{
    if(root-> left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root-> left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    //defining the root node
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
   /*
            1
          /   \
         2     3
        / \   / \
       4   5 6   7
   */
  preorder(root);cout<<endl;
  inorder(root);cout<<endl;
  postorder(root);cout<<endl;
    return 0;
}