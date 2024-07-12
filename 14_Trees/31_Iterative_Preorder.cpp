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


// PREORDER

//The right child is pushed before the left child to make sure that the left subtree is processed first.

void iterativePreorder(Node *root)
{
    if(root == NULL) return;

    stack<Node *> st;
    st.push(root);

    while(!st.empty())
    {
        Node *curr = st.top();
        st.pop();

        cout<<(curr->key)<<" ";
        if(curr->right != NULL){
            st.push(curr->right);
        }
        if(st->left != NULL){
            st.push(curr->left);
        }
    }
}

int main(){

    

    return 0;
}