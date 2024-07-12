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

void mirror(Node *root)
{
    if(root == NULL) return;

    swap(root->left , root->right);

    mirror(root->left);
    mirror(root->right);

}

int main(){

    

    return 0;
}