#include<bits/stdc++.h>
using namespace std;

// RECURSION

int countWays(int n)
{
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n == 2) return 2;

    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

// DP

int minHops(int n)
{
    int h[n+1];

    h[0] = 1, h[1] = 1, h[2] = 1;

    for(int i=3;i<=n;i++)
    {
        h[i] = h[i-1]+h[i-2]+h[i-3];
    }

    return h[n];
}

int main(){

    

    return 0;
}