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

// POSTORDER TRAVERSAL

// left->right->root

void postOrder(Node *root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<(root->key)<<" ";
    }
}

int main(){

    

    return 0;
}