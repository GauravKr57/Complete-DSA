#include<bits/stdc++.h>
using namespace std;

int minCost(int arr[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    int res = 0;

    for(int i=0; i<n ;i++)
    {
        pq.push(arr[i]);
    }

    while(pq.size() > 1)
    {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        int sum = first+second;

        res += sum;

        pq.push(sum);
    }

    return res;
}

int main(){

    

    return 0;
}