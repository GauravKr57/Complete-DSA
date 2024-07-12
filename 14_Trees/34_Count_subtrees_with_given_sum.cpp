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

int countSubtrees(Node *root, int x, int &res)
{
    if(root == NULL){
        return 0;
    }

    int left = countSubtrees(root->left, x, res);
    int right = countSubtrees(root->right, x, res);

    int sum = (root->data)+left+right;

    if(sum == x){
        res++;
    }

    return sum;
}

int main(){

    

    return 0;
}