#include<bits/stdc++.h>
using namespace std;

// PUSH is costly

struct Queue {
    stack<int> s1, s2;

    void enQueue(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push item into s1
        s1.push(x);

        // Push everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Dequeue an item from the queue
    int deQueue()
    {
        // if first stack is empty
        if (s1.empty()) {
            cout << "Q is Empty";
            exit(0);
        }

        // Return top of s1
        int x = s1.top();
        s1.pop();
        return x;
    }
};



// POP is costly

struct Queue
{

    stack<int> s1,s2;

    void push(int x){
        s1.push(x);
    }

    int size(){
        return s1.size();
    }

    int pop(){

        while(s1.size != 1){
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s1.top();
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }

        return ans;
    }

};

int main(){

    

    return 0;
}