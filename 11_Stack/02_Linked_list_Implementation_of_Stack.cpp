#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// using Linked list  
// we will insert and delete in head to make it happen in O(1) time;

struct MyStack
{
    Node *head;
    int size;

    MyStack(){
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        int res = head->data;

        Node *temp = head;
        head = head->next;
        delete(head);
        size--;
    }

    int size()
    {
        return size;
    }

    int top()
    {
        return head->data;
    }

    bool isempty()
    {
        return (head == NULL);
    }

};

int main(){

    class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " Popped from stack\n";
	
	//print top element of stack after poping
	cout << "Top element is : " << s.peek() << endl;
	
	//print all elements in stack :
	cout <<"Elements present in stack : ";
	while(!s.isEmpty())
	{
		// print top element in stack
		cout << s.peek() <<" ";
		// remove top element in stack
		s.pop();
	}

    return 0;
}