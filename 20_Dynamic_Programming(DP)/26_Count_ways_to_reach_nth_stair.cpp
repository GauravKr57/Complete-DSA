#include<bits/stdc++.h>
using namespace std;

// RECURSION

int countWays(int n)
{
    if(n == 0 || n == 1) return n;

    return countWays(n-1) + countWays(n-2);
}

// TABULATION

int count(int n)
{
    int cw[n+1];

    cw[0] = 1, cw[1] = 1;

    for(int i=2;i<=n;i++)
    {
        cw[i] = cw[i-1]+cw[i-2];
    }

    return cw[n];
}

int main(){

    

    return 0;
}