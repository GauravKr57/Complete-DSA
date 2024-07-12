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

// CODE

int count = 0;

void findKsmallest(Node *root, int k)
{
    if(root == NULL){
        return;
    }

    findKsmallest(root->left,k);
    count++;
    if(count == k){
        cout<<(root->data)<<" ";
        return;
    }
    findKsmallest(root->right,k);

}

int main(){

    

    return 0;
}