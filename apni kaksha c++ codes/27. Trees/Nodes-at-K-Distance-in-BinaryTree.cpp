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

//Case-I Nodes' Subtree
void printSubtreeNodes(Node* root, int k)
{
    if(root==NULL || k<0)
        return;
    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }
    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);
}

//Case-II Nodes' Ancestors
int printNodesAncestor(Node* root, Node* target,int k)
{


    if(root ==NULL)
        return -1;
    
    if(root == target)
    {
        printSubtreeNodes(root,k);
        return 0;
    }    


    int dl = printNodesAncestor(root->left,target,k);
    if(dl!=-1)
    {
        if(dl+1 == k)
            cout<<root->data<<" ";
        else
        {
            printSubtreeNodes(root->right,k-dl-2);
        }
        return 1+dl;
    }


    int dr = printNodesAncestor(root->right,target,k);
    if(dr!=-1)
    {
        if(dr+1 == k)
            cout<<root->data<<" ";
        else
        {
            printSubtreeNodes(root->left,k-dr-2);
        }
        return 1+dr;
    }
    //no node is found equal to target node
    return -1;
}

int main()
{
    /*
            1
          /   \
        2       3
      /   \    /  \
     4     5  6    7
                    \   
                     8
    */
   Node *root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);
   root->right->right->right = new Node(8);
    printNodesAncestor(root,root->left,1);
       return 0;
}