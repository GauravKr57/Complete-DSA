#include<bits/stdc++.h>
using namespace std;


// MEMOIZATION

int memo[n+1][W+1] = {-1};

int Knapsack(int W, int wt[], int val[], int n)
{
    if(W == 0 || n == 0)
    {
        return 0;
    }

    if(memo[n][W] != -1){
        return dp[n][W];
    }

    if(wt[n-1] > W)
    {
        memo[n][W] = Knapsack(W, wt, val, n-1);
    }
    else{
        memo[n][W] = max(Knapsack(W, wt, val, n-1), val[n-1] + Knapsack(W-wt[n-1], wt, val, n));
    }

    return memo[n][W];
}



// DP : TABULATION

int knapsack(int W, int wt[], int val[], int n)
{

    int dp[n+1][W+1];

    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 0;
    }
    for(int j=1;j<=W;j++)
    {
        dp[0][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1] > j)
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j] , val[i-1]+dp[i-1][j-wt[i-1]]);
            }
        }
    }

    return dp[n][W];
}

int main(){

    

    return 0;
}