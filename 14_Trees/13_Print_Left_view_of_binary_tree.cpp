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

// CODE : left view means leftmost nodes at all levels


// based on level order traversal LINE BY LINE method 2: we visit the leftmost node first in lvel order traversal

void printLeftview(Node *root)
{
    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        int count = q.size();

        for(int i=0;i<count;i++)
        {
            Node *curr = q.front();
            q.pop();

            if(i == 0){
                cout<<(curr->key)<<" ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }

        }
    }
    
}


void printRightView(Node *root)
{
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        int count = q.size();
        for(int i=0;i<count;i++){
            Node* curr= q.front();
            q.pop();

            if(i==count-1){
                cout<<(curr->key)<<" ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

int main(){

    

    return 0;
}