#include<bits/stdc++.h>
using namespace std;

int maxmItems(int cost[], int n, int credit)
{
    priority_queue<int, vector<int> , greater<int>> pq;

    for(int i=0;i<n;i++)
    {
        pq.push(cost[i]);
    }

    int res = 0;

    while(pq.top() <= credit)
    {
        credit -= pq.top();
        pq.pop();
        res++;
    }

    return res;
}

int main(){

    

    return 0;
}