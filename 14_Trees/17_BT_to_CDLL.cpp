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


// bt to dll


Node *prev = NULL;

Node* BTtoDLL(Node *root)
{
    if(root == NULL){
        return NULL;
    }

    Node* head = BTtoDLL(root->left);

    if(prev == NULL){
        head = root;
    }
    else
    {
        prev->right = root;
        root->left = prev;
    }
    prev = root;

    BTtoDLL(root->right);

    return head;

}

Node *BTtoCDLL(Node *root)
{
    Node* head = BTtoDLL(root);

    head->left = prev;
    prev->right = head;

    return head;
}

int main(){

    

    return 0;
}