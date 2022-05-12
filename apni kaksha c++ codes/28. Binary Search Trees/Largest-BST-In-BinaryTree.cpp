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

struct Info
{
    int size;
    int mx;
    int mn;
    int ans;
    bool isBST;
};

Info largestBSTinBT(Node* root)
{
    if(root==NULL)
        return{0,INT_MIN,INT_MAX,0,true};
    if(root->left == NULL  &&  root->right == NULL)
        return{1,root->data,root->data,1,true};
    Info left = largestBSTinBT(root->left);
    Info right = largestBSTinBT(root->right);
    Info curr;
    curr.size = (1 + left.size + right.size);

    if(((left.isBST) && (right.isBST)) && ((left.mx < root->data) && (right.mn > root->data)) )
    {
        curr.mn = min(left.mn,min(right.mn,root->data));
        curr.mx = max(right.mx,max(left.mx,root->data));
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }
    curr.ans = max(left.ans,right.ans);
    curr.isBST = false;
    return curr;
}

int main()
{
        //     15
        //    /  \
        //   10   30
        //  /
        // 5
    Node* t1 = new Node(15);
    t1->left = new Node(10);
    t1->right = new Node(30);
    t1->left->left = new Node(5);
    // t1->right->right = new Node(5);
    cout<<"Largest BST in Binary Tree : "<<largestBSTinBT(t1).ans<<endl;
    return 0;
}