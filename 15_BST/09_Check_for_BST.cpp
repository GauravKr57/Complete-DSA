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


// LESS EFFICIENT


// inorder traversal of BST is always in ascending order

void inorder(Node *root, vector<int> &v)
{
    if(root != NULL)
    {
        inorder(root->left,v);
        v.push_back(root->key);
        inorder(root->right,v);
    }
}

bool checkBST(Node *root)
{   
    vector<int> vec;

    inorder(root,vec);

    for(int i=0;i<vec.size()-1;i++)
    {
        if(vec[i]>vec[i+1]){
            return false;
        }
    }

    return true;
}


// MOST EFFICIENT (We define range for each node)

bool isBST(Node *root, int min, int max)
{
    if(root == NULL){
        return true;
    }

    return(
        root->data < max &&
        root->data > min &&
        isBST(root->left, min, root->data) &&
        isBST(root->right, root->data, max);
    );
}

bool checkBST(Node *root)
{
    return isBST(root, INT_MIN, INT_MAX);
}

int main(){

    

    return 0;
}