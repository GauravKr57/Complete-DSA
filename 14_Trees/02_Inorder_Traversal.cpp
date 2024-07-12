#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};

// code of INORDER TRAVERSAL

// left->root->right

void Inorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root -> left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

int main(){

    

    return 0;
}