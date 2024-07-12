#include<bits/stdc++.h>
using namespace std;

// RECURSIVE

int countSubsets(int arr[], int n, int sum)
{
    if(n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }

    return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum-arr[n-1]);
}

// DP

// if only positive numbers in array

int count(int arr[], int n, int sum)
{
    int dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 1;
    }
    for(int j=1;j<=sum;j++)
    {
        dp[0][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j >= arr[i-1] && arr[i-1] != 0)
            {
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][sum];
}

// handles the case if 0 is present in subset

int count(int arr[], int n, int sum)
{
    int dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 1;
    }
    for(int j=1;j<=sum;j++)
    {
        dp[0][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j >= arr[i-1] && arr[i-1] != 0)
            {
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    int zero = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zero++;
        }
    }

    return pow(2,zero) * dp[n][sum];
}

int main(){

    


    return 0;
}