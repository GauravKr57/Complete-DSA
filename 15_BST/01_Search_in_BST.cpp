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


//SEARCH IN BST

bool search(Node *root, int x)
{
    if(root == NULL){
        return false;
    }

    if(root->key == x){
        return true;
    }
    else if(x < root->key){
        return search(root->left, x);
    }
    else{
        return search(root->right, x);
    }

}


// ITERATIVE

bool find(Node *root, int x)
{
    while(root != NULL)
    {
        if(root->key == x){
            return true;
        }
        else if(x < root->key){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }

    return false;
}

int main(){

    

    return 0;
}