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

// The idea is to do iterative level order traversal of the given tree using a queue. If we find a node whose left child is empty, we make new key as the left child of the node. Else if we find a node whose right child is empty, we make new key as the right child of that node. We keep traversing the tree until we find a node whose either left or right child is empty.

void insert(Node *root, int k)
{
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if(temp->left == NULL){
            temp->left = new Node(k);
            break;
        }
        else{
            q.push(temp->left);
        }

        if(temp->right == NULL){
            temp->right = new Node(k);
            break;
        }
        else{
            q.push(temp->right);
        }
    }
}

int main(){

    

    return 0;
}