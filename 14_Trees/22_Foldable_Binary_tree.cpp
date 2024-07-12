#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int d)
    {
        key = d;
        left = right = NULL;
    }
};

// CODE

bool isMirror(Node *a, Node *b)
{
    if(a==NULL && b==NULL){
        return true;
    }
    if(a==NULL || b==NULL){
        return false;
    }

    return isMirror(a->left, b->right) && (a->right, b->left);
}

bool isFoldable(Node *root)
{
    if(root == NULL){
        return false;
    }

    return isMirror(root->left, root->right);
}

int main(){

    

    return 0;
}