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


int size(Node *root)
{
    if(root == NULL){
        return 0;
    }
    else{
        return 1+size(root->left)+size(root->right);
    }
}

int main(){

    

    return 0;
}