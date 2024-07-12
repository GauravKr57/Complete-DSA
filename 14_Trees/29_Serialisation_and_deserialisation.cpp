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

// REF: Preorder Traversal


// SERIALISATION

const int EMPTY = -1;

void serialize(Node *root, vector<int> &arr)
{
    if(root == NULL){
        arr.push_back(EMPTY);
        return;
    }

    arr.push_back(root->data);
    serialize(root->left,arr);
    serialize(root->right,arr);
}


// DESERIALISATION

int index=0;

Node *deserialize(vector<int> &arr)
{
    if(index == arr.size()){
        return NULL;
    }

    int val = arr[index++];

    if(val == EMPTY){
        return NULL;
    }

    Node *root = new Node(val);
    root->left = deserialize(arr);
    root->right = deserialize(arr);

    return root;
}

int main(){

    

    return 0;
}