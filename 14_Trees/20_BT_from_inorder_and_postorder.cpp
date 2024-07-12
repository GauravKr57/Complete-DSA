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


// code

int postIndex;

Node *cTree(int in[], int post[], int is, int ie)
{
    if(is > ie){
        return NULL;
    }

    Node* root = new Node(post[postIndex--]);

    int inIndex;
    for(int i=is;i<=ie;i++)
    {
        if(in[i] == root->key){
            inIndex = i;
            break;
        }
    }

    root->right = cTree(in, post, inIndex+1, ie);
    root->left = cTree(in, post, is, inIndex-1);

    return root;

}

int main(){

    

    return 0;
}