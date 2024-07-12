#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;

    Node(int d)
    {
        key = d;
        next = NULL;
    }
};


// code

int diameter = 0;

int height(Node *root)
{
    if(root == NULL){
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    diameter = max(diameter, 1+lh+rh);

    return 1 + max(lh,rh); // retutn height

}

int diameterOftree(Node *root)
{
    int h = height(root);

    return diameter;
}

int main(){

    

    return 0;
}