#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};


// NAIVE : TC: O(n sq)

int height(Node *root)
{
    if(root == NULL){
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh)+1;
}

bool checkBalanced(Node *root)
{
    if(root == NULL){
        return true;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return (abs(leftHeight-rightHeight) <= 1) && (checkBalanced(root->left)) && (checkBalanced(root->right));

}


// EFFICIENT : TC- O(n)


// For each node make two recursion calls – one for left subtree and the other for the right subtree. 
// Based on the heights returned from the recursion calls, decide if the subtree whose root is the current node is height-balanced or not. 
// If it is balanced then return the height of that subtree. Otherwise, return -1 to denote that the subtree is not height-balanced.
// Below is the implementation of the above approach.

int isBalanced(Node *root)
{
    if(root == NULL){
        return 0;
    }

    int leftHeight = isBalanced(root->left);
    int rightHeight = isBalanced(root->right);

    if(leftHeight == -1) return -1;
    if(rightHeight == -1) return -1;

    if(abs(leftHeight - rightHeight) > 1) return -1;

    return max(leftHeight,rightHeight)+1;

}

int main(){

    

    return 0;
}