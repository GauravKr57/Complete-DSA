#include<bits/stdc++.h>
using namespace std;

int main(){

    // MAXHEAP

    priority_queue<int> pq;
    
    pq.push(10);
    pq.push(5);
    pq.push(15);

    cout<<pq.size()<<" ";
    cout<<pq.top()<<endl;

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    // MINHEAP

    priority_queue<int, vector<int>, greater<int>> p;
    
    p.push(100);
    p.push(50);
    p.push(150);

    cout<<p.size()<<" ";
    cout<<p.top()<<endl;

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;

    int arr[] = {5,10,46};
    vector<int> v = {10,100,34};

    priority_queue<int> pi(arr,arr+3);
    priority_queue<int> pr(v.begin(),v.end());

    return 0;
}