#include<bits/stdc++.h>
using namespace std;

// USING DP

int maxValue(int arr[], int n)
{
    if(n == 1) return arr[0];

    int dp[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0],arr[1]);

    for(int i=2;i<n;i++)
    {
        dp[i] = max(dp[i-1], arr[i]+dp[i-2]);
    }

    return dp[n-1];
}

// EFFICIENT

int sticklierThief(int arr[], int n)
{
    if(n == 1) return arr[0];

    int prev_prev = arr[0];
    int prev = max(arr[0],arr[1]);
    int res = prev;

    for(int i=2;i<n;i++)
    {
        res = max(prev, arr[i]+prev_prev);

        prev_prev = prev;
        prev = res;
    }

    return res;
}

int main(){

    

    return 0;
}