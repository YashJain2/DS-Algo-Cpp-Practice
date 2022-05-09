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


//Time Complexity: O(n)
int calcHeight(Node* root)
{
    if(root==NULL)
        return 0;
    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);

    return max(leftHeight,rightHeight)+1;
}


//Time Complexity: O(n^2)
int diameter(Node* root)
{
     if(root==NULL)
        return 0;
    int leftHeigh = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);
    int currentDiameter = leftHeigh + rightHeight + 1;

    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);
    return max(currentDiameter,max(leftDiameter,rightDiameter));
}

//Optimized approach O(n)
int diameter1(Node* root, int* height)
{
    if(root==NULL)
    {
        *height =0;
        return 0;
    }
    int lheight=0,rheight=0;
    int leftDia = diameter1(root->left,&lheight);
    int rightDia = diameter1(root->right,&rheight);
    int currDia = lheight + rheight + 1;
    *height = max(lheight,rheight) + 1;
    return max(currDia, max(leftDia,rightDia));
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
//    cout<<diameter(root)<<endl;
   int height =0;
   cout<<diameter1(root,&height)<<endl;

       return 0;
}