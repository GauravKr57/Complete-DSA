#include<bits/stdc++.h>
using namespace std;

// RECURSIVE

int minJumps(int arr[], int n)
{
    if(n == 1){
        return 0;
    }

    int res = INT_MAX;

    for(int i=0;i<=n-2;i++)
    {
        if(arr[i] + i >= n-1)
        {
            int sub_result = minJumps(arr, i+1);

            if(sub_result != INT_MAX)
            {
                res = min(res, sub_result+1);
            }
        }
    }

    return res;
}


// DP

int minHops(int arr[], int n)
{
    int dp[n];
    
    dp[0] = 0;

    for(int i=1;i<n;i++){
        dp[i] = INT_MAX;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j+arr[j] >= i)
            {
                if(dp[j] != INT_MAX){
                    dp[i] = min(dp[i], dp[j]+1);
                }
            }
        }
    }

    return (dp[n-1] != INT_MAX) : dp[n-1] ? -1;
}

int main(){

    

    return 0;
}