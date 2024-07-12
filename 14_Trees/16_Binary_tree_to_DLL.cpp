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

Node *prev = NULL;

Node *BTtoDLL(Node *root)
{
    if(root == NULL){
        return NULL;
    }

    Node *head = BTtoDLL(root->left);

    if(prev == NULL){
        head = root;
    }
    else{
        root->left = prev;
        prev->right = root;
    }

    prev = root;

    BTtoDLL(root->right);

    return head;

}

int main(){

    

    return 0;
}