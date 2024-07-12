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

// code

void printKdist(Node *root, int k)
{

    if(root==NULL || k<0) return;

    if(k==0){
        cout<<(root->key)<<" ";
    }

    printKdist(root->left,k-1);
    printKdist(root->right,k-1);

}

int main(){

    

    return 0;
}