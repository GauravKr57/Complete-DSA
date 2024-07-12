#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;

    Node(int d)
    {
        key = d;
        next = NULL;
    }
};


// EFFICIENT 
// lca
// The idea is to traverse the tree starting from the root node. If any of the given keys (n1 and n2) matches with root, then root is LCA (assuming that both keys are present). If root doesn't match with any of the keys, we recur for left and right subtrees. The node which has one key present in its left subtree and the other key present in the right subtree is the LCA. If both keys lie in left subtree, then left subtree has LCA also, otherwise, LCA lies in the right subtree.

Node *lca(Node *root, int n1, int n2)
{
    if(root == NULL){
        return NULL;
    }

    if(root->key==n1 || root->key==n2){
        return root;
    }

    Node *lca1 = lca(root->left, n1, n2);
    Node *lca2 = lcq(root->right, n1, n2);

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

int main(){

    

    return 0;
}