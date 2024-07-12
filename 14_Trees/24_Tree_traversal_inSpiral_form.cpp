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

void printSpiral(Node *root)
{
    if(root == NULL) return;

    stack<Node *> currLevel;
    stack<Node *> nextLevel;

    bool leftTOright = false;

    currLevel.push(root);

    while(!currLevel.empty())
    {
        Node *curr = currLevel.top();
        currLevel.pop();

        cout<<curr->data<<" ";

        if(leftTOright == true)
        {
            if(curr->left != NULL){
                nextLevel.push(curr->left);
            }
            if(curr->right != NULL){
                nextLevel.push(curr->right);
            }
        }
        else
        {
            if(curr->right != NULL){
                nextLevel.push(curr->right);
            }
            if(curr->left != NULL){
                nextLevel.push(curr->left);
            }
        }

        if(currLevel.empty())
        {
            leftTOright = (! leftTOright);
            swap(currLevel, nextLevel);
        }

    }

}

int main(){

    

    return 0;
}