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

// INSERT IN BST

// Recursive

Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);

    if(root ==  NULL){
        return temp;
    }

    else if(x < root->key){
        root->left = insert(root->left, x);
    }
    else{
        root->right = insert(root->right, x);
    }

    return root;
}


// Iterative

Node *insertX(Node *root, int x)
{
    Node *temp = new Node(x);

    Node *parent = NULL, *curr = root;

    while(curr != NULL)
    {
        parent = curr;

        if(x < root->key){
            root = root->left;
        }
        else if(x > root->key){
            root = root->right;
        }
        else{
            return temp;
        }
    }

    if(parent == NULL){
        return temp;
    }
    else if(x < parent->key){
        parent->left = temp;
    }
    else{
        parent->right = temp;
    }

    return root;

}

int main(){

    

    return 0;
}