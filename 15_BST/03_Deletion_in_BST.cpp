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


// DELETION IN BST


//The inorder successor can be obtained by finding the minimum value in the right child of the node.

Node *getSuccesor(Node *curr)
{
    curr = curr->right;

    while(curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

Node *delNode(Node *root, int x)
{
    if(root == NULL){
        return NULL;
    }

    if(x < root->left)
    {
        root->left = delNode(root->left, x);
    }
    else if(x > root->right)
    {
        root->right = delNode(root->right, x);
    }
    else
    {
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *successor = getSuccessor(root);
            root->key = successor->key;
            root->right = delNode(root->right, successor->key);
        }
    }

    return root;

}

int main(){

    

    return 0;
}