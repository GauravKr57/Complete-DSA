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


void ZigZagTraversal(Node *root)
{
    if(root == NULL) return;

    stack<Node *> currLevel;
    stack<Node *> nextLevel;
    
    bool leftToRight = true; // print from right to left when push to stack from left to right

    currLevel.push(root);

    while(!currLevel.empty())
    {
        Node *temp = currLevel.top();
        currLevel.pop();

        cout<<(temp->key)<<" ";

        if(leftToRight)
        {
            if(temp->left != NULL){
                nextLevel.push(temp->left);
            }
            if(temp->right != NULL){
                nextLevel.push(temp->right);
            }
        }
        else
        {
            if(temp->right != NULL){
                nextLevel.push(temp->right);
            }
            if(temp->left != NULL){
                nextLevel.push(temp->left);
            }
        }

        // when we pushed ans printed entire level , we will move to next level and currlevel stack becomes empty

        if(currLevel.empty()){
            leftToRight = (! leftToRight);
            swap(currlevel,nextLevel);
        }

    }

}

int main(){

    

    return 0;
}