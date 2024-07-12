#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq = {10,20,30,32};
    dq.push_front(11);
    dq.push_back(88);

    for(auto x:dq){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<dq.front()<<" "<<dq.back();
    cout<<endl;

    deque<int> d = {21,32,213,53,113,43,3};
    auto it = d.begin();
    it++;
    it++;
    d.insert(it,77);
    d.pop_front();
    d.pop_back();

    cout<<d.size()<<endl;

    for(auto x:d){
        cout<<x<<" ";
    }

    return 0;
}