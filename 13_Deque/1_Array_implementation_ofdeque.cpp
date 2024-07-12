#include<bits/stdc++.h>
using namespace std;

// CIRCULAR ARRAYS

struct deque
{   
    int *arr;
    int cap, size, front;

    deque(int c)
    {
        arr = new int[c];
        cap = c;
        size = 0;
        front = 0;
    }

    bool isEmpty(){
        return (size==0);
    }

    bool isFull(){
        return (size==cap);
    }

    void insertFront(int x){
        if(isFull()) return;

        front = (front-1+cap) % cap;
        arr[front] = x;
        size++;
    }

    void insertRear(int x){
        if(isFull()) return;

        int rear = (front+size-1)%cap;
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }

    void deleteFront(){
        if(isEmpty()) return;

        front = (front+1) % cap;
        size--;
    }

    void deleteRear(){
        if(isEmpty()) return;

        size--;
    }

    int getFront(){
        if(isEmpty()) return -1;

        return front;
    }

    int getRear(){
        if(isEmpty()) return -1;

        int rear = (front+size-1)%cap;
        return rear;
    }
};

int main(){

    

    return 0;
}