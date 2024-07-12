#include<bits/stdc++.h>
using namespace std;

// DP

bool targetSum(int arr[], int n, int sum)
{
    bool dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
    {
        dp[i][0] = true;
    }
    for(int j=0;j<=sum;j++)
    {
        dp[0][j] = false;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j < arr[i-1])
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
    }

    return dp[n][sum];
}

bool findPartition(int arr[], int n)
{
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }

    if(sum % 2 != 0) return false;

    return targetSum(arr, n, sum/2);
}

int main(){

    

    return 0;
}