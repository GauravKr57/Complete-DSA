#include<bits/stdc++.h>
using namespace std;

//User function template in C++



typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}



class Solution{
public:
    //Function that constructs BST from its preorder traversal.
    
    Node* construct(int arr[], int l, int h){
    if(l>h) return NULL;
    Node* root = newNode(arr[l]);
    int i=l+1;
    while(arr[i]<arr[l] && i<=h) i++;
    root->left = construct(arr, l+1, i-1);
    root->right = construct(arr, i, h);
    return root;
}

Node* post_order(int pre[], int n)
{
    if(n==0) return NULL;
    return construct(pre, 0, n-1);
}
};

int main(){

    

    return 0;
}