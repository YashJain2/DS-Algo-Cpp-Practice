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

void swap(int *a, int *b)
{
    int temp =*a;
    *a = *b;
    *b = temp;
}

void calcPointers(Node* root, Node **first, Node **mid, Node **last,Node **prev)
{
    if(root==NULL)
        return;
    //inorder traversal
    calcPointers(root->left,first,mid,last,prev);
    if(*prev && root->data <(*prev)->data)
    {
        if(!*first)
        {
            *first = *prev;
            *mid = root;
        }
        else
            *last = root;
    }
    *prev = root;
    calcPointers(root->right,first,mid,last,prev);
}

void restore(Node* root)
{
    Node *first=NULL,*last=NULL,*mid=NULL,*prev=NULL;
    calcPointers(root,&first,&mid,&last,&last);
    if(first && last)
        swap(&(first->data),&(last->data));
    
    else if (first && mid)
        swap(&(first->data),&(mid->data));
}

void inorder(Node *root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}

int main()
{
    Node* t1 = new Node(15);
    t1->left = new Node(10);
    t1->right = new Node(30);
    t1->left->left = new Node(40);
    t1->left->right = new Node(12);
    t1->right->right = new Node(5);
    // t1->right->right = new Node(5);
    inorder(t1);
    cout<<"\n";
    restore(t1);
    inorder(t1);
    cout<<"\n";
    return 0;
}