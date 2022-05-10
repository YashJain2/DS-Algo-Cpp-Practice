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

int maxSumPathUtil(Node* root, int &ans)
{
    if(root==NULL)
        return 0;
    int left = maxSumPathUtil(root->left,ans);
    int right = maxSumPathUtil(root->right,ans);
    int nodeMax = max(max(root->data,root->data+left+right),max(root->data + left, root->data + right));
    ans = max(ans,nodeMax);
    int singlePathSum = max(root->data,max(root->data+left,root->data+right));
    return singlePathSum;
}

int maxSumPath(Node* root)
{
    int ans = INT_MIN;
    //calculating the answer only
    maxSumPathUtil(root,ans);
    return ans;
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
    cout<<maxSumPath(root);
       return 0;
}