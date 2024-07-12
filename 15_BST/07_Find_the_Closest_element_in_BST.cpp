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


int findClosest(Node *root, int k)
{
    int res = INT_MAX;
    Node *curr = root;

    while(curr != NULL)
    {
        res = min(res, abs(k-(curr->data)));

        if(k > curr->data){
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }

    return res;
}

int main(){

    

    return 0;
}