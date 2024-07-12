#include<bits/stdc++.h>
using namespace std;

// ITERATIVE

void rev(queue<int> &q)
{
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

// RECURSIVE

void reverse(queue<int> &q)
{
    if(q.empty()){
        return ;
    }

    int x = q.front();

    reverse(q);

    q.push(x);
}

int main(){

    

    return 0;
}