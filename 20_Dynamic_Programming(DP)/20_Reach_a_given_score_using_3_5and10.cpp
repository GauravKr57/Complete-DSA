#include<bits/stdc++.h>
using namespace std;

// DP

int combinations(int n)
{
    int dp[n+1] = {0};

    dp[0] = 1;

    for(int i=3;i<=n;i++)
    [
        dp[i] += dp[i-3];
    ]

    for(int i=5;i<=n;i++)
    {
        dp[i] += dp[i-5];
    }

    for(int i=10;i<=n;i++)
    {
        dp[i] += dp[i-10];
    }

    return dp[n];
}

int main(){

    

    return 0;
}