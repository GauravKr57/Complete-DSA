#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    int size;

    Queue(){
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enque(int x)
    {
        Node *temp = new Node(x);
        size++;
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deque()
    {
        Node *temp = front;
        size--;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete(temp);
    }

    int getSize()
    {
        return size;
    }

};

int main(){

    

    return 0;
}