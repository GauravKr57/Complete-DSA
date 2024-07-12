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

// LEVEL ORDER TRAVERSAL


//Algorithm: The Level Order Traversal can be implemented efficiently using a Queue.
// Create an empty queue q.
// Push the root node of tree to q. That is, q.push(root).
// Loop while the queue is not empty:
// Pop the top node from queue and print the node.
// Enqueue node's children (first left then right children) to q
// Repeat the process until queue is not empty.

void printLevel(Node *root)
{
    if(root == NULL) return;

    queue<Node *> q;

    q.push(root);

    while(!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }

}

int main(){

    

    return 0;
}