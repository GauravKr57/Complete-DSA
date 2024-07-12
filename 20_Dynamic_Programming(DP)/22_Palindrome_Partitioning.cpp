#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    while(i < j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// RECURSION

int partitionCount(string s, int i, int j)
{
    if(i == j) return 0;

    if(isPalindrome(str, i, j))
    {
        return true;
    }

    int res = INT_MAX;

    for(int k=i;k<j;k++)
    {
        res = min(res, partitionCount(s, i, k) + partitionCount(s, k+1, j) + 1 );
    }

    return res;
}

int final(string s)
{
    int n = s.length();

    return partitionCount(s, 0, n-1);
}

//MEMOIZATION

int palindromepPart(string str, int i, int j, vector<vector<int>> &dp)
{
    if(isPalindrome(str, i, j) == true)
    {
        return true;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int res = INT_MAX;

    for(int k=i;k<j;k++)
    {
        res = min(res, palindromepPart(str, i, k) + palindromepPart(str, k+1, j) + 1 );
    }

    return dp[i][j] = res;
}


// TABULATION

int minCuts(string str)
{
    int n = str.length();

    vector<vector<int>> dp(n, vector<int>(n, -1));

    for(int i=0;i<n;i++)
    {
        dp[i][i] = 0;
    }

    for(int gap = 1; gap<n; gap++)
    {
        for(int i = 0; i+gap<n ; i++)
        {
            int j = i+gap;

            if(isPalindrome(str, i, j) == true)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = INT_MAX;

                for(int k=i; k<j; k++)
                {
                    dp[i][j] = min(dp[i][j] , dp[i][k] + dp[k+1][j] + 1 );
                }
            }
        }
    }

    return dp[0][n-1];
}


int main(){

    

    return 0;
}