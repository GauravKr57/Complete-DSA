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

bool isSame(Node* a, Node* b)
{
    if(a==NULL && b==NULL){
        return true;
    }
    if(a==NULL || b==NULL){
        return false;
    }
    if(a->key != b->key){
        return false;
    }

    return isSame(a->left, b->left) && isSame(a->right, b->right);
}

bool isSubtree(Node* T, Node* S)
{
    if(S == NULL){
        return true;
    }
    if(T == NULL){
        return false;
    }


    return isSame(T,S) || isSubtree(T->left, S) || isSubtree(T->right, S);
}

int main(){

    

    return 0;
}