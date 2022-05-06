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

int countNodes(Node* root)
{
    if(root==NULL)
        return 0;
    return countNodes(root->left) + countNodes(root->right) + 1;
    //+1 is for the root node and rest two recursively count the nodes of the 
    //left and right sub trees of the respective node
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
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);
   cout<<countNodes(root)<<endl;
       return 0;
}