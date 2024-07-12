#include<bits/stdc++.h>
using namespace std;


// RECURSIVE

int countWays(int coins[], int n, int sum)
{
    if(sum == 0) return 1;

    if(sum < 0) return 0;

    if(n == 0) return 0;

    return countWays(coins, n, sum-coins[n-1]) + countWays(coins, n-1, sum);
}


// DP : TABULATION

int combinations(int coins[], int n, int s)
{
    int dp[n+1][s+1];

    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int j=1;j<=s;j++){
        dp[0][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(coins[i-1] > j)
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
            }
        }
    }

    return dp[n][s];

}


// MEMOIZATION

int dp[n+1][s+1] = {-1};

int coinchange(int coins[], int n, int s)
{
    if(dp[n][s] != -1){
        return dp[n][s];
    }
    if(s == 0){
        return 1;
    }
    if(n == 0 || s<0){
        return 0;
    }

    if(coins[n-1] >= s){
        return coinchange(coins, n-1, s) + coinchange(coins, n, s-coins[n-1]);
    }

    return coinchange(coins, n-1, s);
}

int main(){

    

    return 0;
}