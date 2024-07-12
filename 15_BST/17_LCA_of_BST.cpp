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

// NAIVE

Node *lca(Node *root, int n1, int n2)
{
    if(root == NULL){
        return NULL;
    }

    if(root->key == n1 || root->key==n2){
        return root;
    }

    Node *lca1 = lca(root->left,n1,n2);
    Node *lca2 = lca(root->right,n1,n2);

    if(lca1 != NULL && lca2 != NULL){
        return root;
    }

    if(lca1 != NULL){
        return lca1;
    }
    else{
        return lca2;
    }

}


// EFFICIENT

Node *LCA(Node *root, int n1,int n2)
{
    if(root == NULL){
        return NULL;
    }

    if(root->key>n1 && root->key>n2)
    {
        return LCA(root->left,n1,n2);
    }
    if(root->key<n1 && root->key<n2){
        return LCA(root->right,n1,n2);
    }

    return root;

}

int main(){

    

    return 0;
}