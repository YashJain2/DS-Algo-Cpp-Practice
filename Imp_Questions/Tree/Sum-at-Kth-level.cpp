//level order traversal 
//we use queue to store the order of traversal
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

int sumAtKthLevel(Node* root,int k)
{
    if(root==NULL)
        return -1;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    int level=0,sum=0;

    while(!q.empty())
    {
        Node * node = q.front();
        q.pop();
        if(node!=NULL)
        {
            if(level==k)
                sum+=node->data;
            // cout<<node->data<<" ";
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}


int main()
{
    /*
            1
          /   \
        2       3
      /   \    /  \
     4     5  6    7
     Level order traversal sequence: 1 2 3 4 5 6 7
    */
   Node *root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);
    cout<<sumAtKthLevel(root,2);
    return 0;
}
