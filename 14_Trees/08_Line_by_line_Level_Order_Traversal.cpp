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

void levelOrderlinebyline(Node *root)
{
    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();

        if(curr == NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }

        cout<<(curr->key)<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

// method 2

void levelOrderbyLine(Node *root)
{
    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        int count = q.size();

        // inner loop prints one level at a time , outer loop changes level

        for(int i=0;i<count;i++)
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
}

int main(){

    

    return 0;
}