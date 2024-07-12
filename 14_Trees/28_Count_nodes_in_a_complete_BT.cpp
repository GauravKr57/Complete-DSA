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

// Niave

int nodes(Node *root)
{
    if(root == NULL){
        return 0;
    }

    return 1+ nodes(root->left)+ nodes(root->right);
}


// EFFICIENT

int countNodes(Node *root)
{
    int lh=0, rh=0;

    Node *curr = root;

    while(curr != NULL){
        lh++;
        curr = curr->left;
    }

    curr = root;

    while(curr != NULL){
        rh++;
        curr = curr->right;
    }

    if(lh == rh){
        return pow(2,lh)-1;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main(){

    

    return 0;
}