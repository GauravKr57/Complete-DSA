#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int s, int e)
{
    int res = 0;
    for(int i=s;i<=e;i++){
        res += arr[i];
    }

    return res;
}

// REURSION

int allocateMin(int arr[0], int n, int k)
{
    if(k == 1)
    {
        return sum(arr, 0, n-1);
    }
    if(n == 1)
    {
        return arr[0];
    }

    int res=INT_MAX;

    for(int i=1;i<n;i++)
    {
        res = min(res, max( allocateMin(arr, i, k-1) , sum(arr, i, n-1)));
    }

    return res;
}

// DP: TABULATION

int allocateMinPages(int arr[], int n, int k)
{
    int dp[n+1][k+1];

    for(int i=1;i<=n;i++)
    {
        dp[i][1] = sum(arr, 0, i);
    }
    for(int j=1;j<=k;j++)
    {
        dp[1][j] = arr[0];
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            dp[i][j] = INT_MAX;

            for(int p=1;p<i;p++)
            {
                dp[i][j] = min(dp[i][j], max(dp[p][j-1] , sum(arr, p, i-1)));
            }
        }
    }

    return dp[n][k];
}

int main(){

    

    return 0;
}