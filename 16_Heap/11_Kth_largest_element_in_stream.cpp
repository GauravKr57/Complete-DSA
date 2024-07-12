#include<bits/stdc++.h>
using namespace std;

void printKthLargest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);

        if(pq.size() < k){
            cout<<-1<<" ";
        }
        else if(pq.size() == k){
            cout<<pq.top();
        }
        else{
            pq.pop();
            cout<<pq.top();
        }
    }
}

int main(){

    

    return 0;
}