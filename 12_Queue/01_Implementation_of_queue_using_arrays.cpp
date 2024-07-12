#include<bits/stdc++.h>
using namespace std;

struct Queue
{

    int *arr;
    int front, cap, size;

    Queue(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0;
        size = 0;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size==0);
    }

    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        else{
            return front;
        }
    }

    int getRear()
    {
        int rear = (front+size-1)%cap;

        if(isFull()){
            return -1;
        }
        else{
            return rear;
        }
    }

    void enque(int x)
    {
        if(isFull()){
            return;
        }

        int rear = getRear();

        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }

    void deque()
    {
        if(isEmpty()){
            return -1;
        }
        front = (front+1)%cap;
        size--;
    }

    int getSize()
    {
        return size;
    }

};

int main(){

    

    return 0;
}