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


// CODE

Node *prev = NULL, *first = NULL, *second = NULL;

void fixBST(Node *root)
{
    if(root == NULL) return;

    fixBST(root->left);

    if(prev != NULL && root->key < prev->key)
    {
        if(first == NULL){
            first = prev;
        }
        second = root;
    }
    prev = root;

    fixBST(root->right);
}

void correctBST(Node *root)
{
    fixBST(root);

    swap(first->data, second->data);
}

int main(){

    

    return 0;
}