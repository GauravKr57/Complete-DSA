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

// So, for the minimum time required to burn any subtree will be: 

// The time required for fire to reach the ancestor from initial burnt leaf + depth of the opposite side 

// Therefore, to find time required to burn the complete tree, we need to calculate the above value for every node, and take maximum of that value. 

// ans = max(ans, (time required for fire to reach current node + depth of other subtree))



int res = 0;

int burnTime(Node *root, iny leaf, int &dist)
{
    if(root == NULL){
        return 0;
    }

    if(root->key == leaf){
        dist = 0;
        return 1;
    }

    int ldist = -1, rdist = -1;

    int lh = (root->left, leaf, ldist);
    int rh = (root->right, leaf, rdist);

    if(ldist != -1) // IF given leaf lies on left side of ancestor
    {
        dist = ldist+1;
        res = max(res, dist+rh);
    }
    else if(rdist != -1) // If given leaf lies on right side of ancestor
    {
        dist = rdist+1;
        res = max(res, dist+lh);
    }

    return max(lh,rh)+1;

}

// VALUE OF "res" IS THE BURNTIME

int main(){

    

    return 0;
}