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

// 1 Start at the root Node.
// 2 If root->data == key, 
//      floor of the key is equal 
//      to the root.
// 3 Else if root->data > key, then 
//      floor of the key must lie in the
//      left subtree.
// 4 Else floor may lie in the right subtree 
//   but only if there is a value lesser than 
//   or equal to the key.If not, then root is
//   the key.

Node *floor(Node *root, int x)
{
    Node *curr = root;
    Node *res = NULL;

    while(curr != NULL)
    {
        if(curr->key == x){
            return curr;
        }
        else if(curr->key > x){
            curr = curr->left;
        }
        else if(curr->key < x){
            res = curr;
            curr = curr->right;
        }
    }

    return res;
}

int main(){

    

    return 0;
}