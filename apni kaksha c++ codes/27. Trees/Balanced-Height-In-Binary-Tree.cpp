#include<bits/stdc++.h>
using namespace std;

//tree data structure
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    //constructor function for the node
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//My approach
bool flag = true;
int balanceHeightTree(Node* root)
{
    if(root==NULL)
        return 0;
    int leftHeight = balanceHeightTree(root->left);
    int rightHeight = balanceHeightTree(root->right);
    // cout<<leftHeight<<" "<<rightHeight<<endl;
    if(abs(leftHeight-rightHeight)>1)
        flag = false;
    return (max(leftHeight,rightHeight) + 1);
}

int height(Node* root)
{
    if(root==NULL)
        return 0;
     int lh = height(root->left);
    int rh = height(root->right);
    return (max(lh,rh) + 1);
}

//Time Complexity: O(n^2)
bool isBalanced(Node* root)
{
    if(root==NULL)
        return true;
    if(isBalanced(root->left)==false)
        return false;
    if(isBalanced(root->right)==false)
        return false;
    
    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh)<=1)
        return true;
    else
        return false;
}

//Time Complexity O(n)
bool isBalanced1(Node* root, int* height)
{
    if(root==NULL)
        return true;
    int lh=0,rh=0;
    if(isBalanced(root->left,&lh)==false)
        return false;
    if(isBalanced(root->right,&rh)==false)
        return false;
    *height = max(lh,rh)+1;
    if(abs(lh-rh)<=1)
        return true;
    else
        return false;
}


void preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    /*
            1
          /   \
        2       3
      /   \    /  \
     4     5  6    7
    */
   Node *root = new Node(1);
   root->left = new Node(2);
//    root->right = new Node(3);
   root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
    balanceHeightTree(root);
    cout<<flag<<endl;
    if(isBalanced(root))
        cout<<"Tree is Height Balanced\n";
    else
        cout<<"Tree is not Height Balanced\n";
    // preorder(root);
       return 0;
}