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


int getMax(Node *root)
{
    if(root == NULL){
        return INT_MIN;
    }
    else
    {
        return max(root->key , max(getMax(root->left), getMax(root->right)));
    }
}

int main(){

    

    return 0;
}