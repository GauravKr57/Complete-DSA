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

// CODE : based on method 2 of level order traversal line by line


// maxm width of bnary tree = maxm elements that remain in queue during traversal

int maxmWidth(Node *root)
{
    if(root == NULL){
        return 0;
    }

    queue<Node *> q;
    q.push(root);

    int res = 0;

    while(!q.empty())
    {
        int count = q.size();

        res = max(res,count);

        for(int i=0;i<count;i++)
        {
            Node *curr = q.front();
            q.pop();

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }

    return res;
}


// FUNCTION TO GET WIDTH

int getWidth(node* root, int level)
{
	if (root == NULL)
		return 0;
	if (level == 1)
		return 1;
	else if (level > 1)
		return getWidth(root->left, level - 1)
			+ getWidth(root->right, level - 1);
}

int main(){

    

    return 0;
}