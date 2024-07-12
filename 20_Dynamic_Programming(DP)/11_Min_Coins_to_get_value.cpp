#include<bits/stdc++.h>
using namespace std;

// RECURSIVE

int minCoins(int coins[], int n, int val)
{
    if(val == 0){
        return 0;
    }

    int res = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(coins[i] <= val)
        {
            int sub_result = minCoins(coins, n, val-coins[i]);

            if(sub_result != INT_MAX){
                res = min(res, sub_result+1);
            }
        }
    }

    return res;
}


// DP: TABULATION

int getCoins(int coins[], int n, int val)
{
    int dp[val+1];

    dp[0] = 0;

    for(int i=1;i<=val;i++){
        dp[i] = INT_MAX;
    }

    for(int i=1;i<=val;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(coins[j] <= i)
            {
                int sub_result = dp[i-coins[j]];

                if(sub_result != INT_MAX){
                    dp[i] = min(dp[i], sub_result+1);
                }
            }
        }
    }

    return dp[val];
}


int main(){

    

    return 0;
}