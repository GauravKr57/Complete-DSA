#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// copy next of deleting node to the deleting node and then remove next node

Node *deletePointer(Node *point){

    // If the node to be deleted is the
	// last node of linked list
	if (point->next == NULL)
	{
		free(node_ptr);
		// this will simply make the node_ptr NULL.
		return;
	}

    Node *temp = point->next;
    point->data = temp->data;

    point->next = temp->next;
    delete temp;

}

int main(){

    

    return 0;
}