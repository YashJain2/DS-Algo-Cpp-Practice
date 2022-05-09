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

void rightView(Node* root)
{
    vector<int> a;
    if(root==NULL)
        return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int x;
    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node!=NULL)
        {
            x=node->data;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            a.push_back(x);
            q.push(NULL);
        }
    }
    a.push_back(x);
    for(auto &i: a)
        cout<<i<<" ";
}

void rightView1(Node* root)
{
    if(root==NULL)
        return;
    queue <Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n= q.size();
        for(int i=0;i<n;i++)
        {
            Node* node = q.front();
            q.pop();
            if(i==(n-1))
                cout<<node->data<<" ";
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
    }
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
   root->right = new Node(3);
   root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
rightView(root);
cout<<"\n";
rightView1(root);
       return 0;
}