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

bool identicalTree(Node* t1, Node* t2)
{
    if(t1==NULL && t2==NULL)
        return true;
    else if (t1==NULL || t2==NULL)
        return false;
    bool checkCurrNode = (t1->data==t2->data)?true:false;
    bool leftTree = identicalTree(t1->left,t2->left);
    bool rightTree = identicalTree(t1->right,t2->right);
    return (checkCurrNode & leftTree & rightTree);
}

int main()
{
    Node* t1 = new Node(1);
    t1->right = new Node(3);
    t1->right->left = new Node(2);
    // t1->right->right = new Node(5);

    Node* t2 = new Node(1);
    t2->right = new Node(3);
    t2->right->left = new Node(2);
    // t2->right->right = new Node(7);

    if(identicalTree(t1,t2))
        cout<<"Trees are identical\n";
    else
        cout<<"Trees are not identical\n";
    return 0;
}