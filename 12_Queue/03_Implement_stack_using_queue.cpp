#include<bits/stdc++.h>
using namespace std;

// if PUSH operation is costly

struct Stack
{

    queue<int> q1,q2;

    int size(){
        return q1.size();
    }
    int top(){
        return q1.front();
    }
    int pop(){
        if(q1.empty()){
            return -1;
        }
        int res = q1.front();
        q1.pop();
        return res;
    }

    // Push operation is costly

    void push(int x){

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
};

// If POP operation is costly

struct Stack
{

    queue<int> q1,q2;

    int size(){
        return q1.size();
    }
    int front(){
        return q1.front();
    }
    void push(int x){
        q1.push(x);
    }

    // Pop operation is costly

     int pop(){

        int res = q1.back();

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }

        return res;
    }
};

int main(){

    

    return 0;
}