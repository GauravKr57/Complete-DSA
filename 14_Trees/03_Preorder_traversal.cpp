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

// Preorder Traversal

// Root->left->right

void preOrder(Node *root)
{
    if(root != NULL)
    {
        cout<<(root->key)<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){

    

    return 0;
}