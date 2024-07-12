#include<bits/stdc++.h>
using namespace std;

// TO GET MINIMUM NUMBER OF TRIALS FOR WORST CASE

// When we drop an egg from a floor x, there can be two cases (1) The egg breaks (2) The egg doesn't break. 
 

// If the egg breaks after dropping from 'xth' floor, then we only need to check for floors lower than 'x' with remaining eggs as some floor should exist lower than 'x' in which egg would not break; so the problem reduces to x-1 floors and n-1 eggs.
// If the egg doesn't break after dropping from the 'xth' floor, then we only need to check for floors higher than 'x'; so the problem reduces to 'k-x' floors and n eggs.

// Since we need to minimize the number of trials in worst case, we take the maximum of two cases. We consider the max of above two cases for every floor and choose the floor which yields minimum number of trials. 


// RECURSIVE

int minTrials(int e, int f)
{
    if(f == 0 || f == 1){
        return f;
    }
    if(e == 1){
        return f;
    }

    int ans = INT_MAX;

    for(int x=1;x<=f;x++)
    {
        int res = max(minTrials(e-1, x-1), minTrials(e,f-x));

        ans = min(ans,res)+1;
    }

    return ans;
}


// DP : TABULATION


int eggDroppingPuzzle(int e, int f)
{
    int dp[e+1][f+1];

    for(int i=1;i<=e;i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 1;
    }
    for(int j=1;j<=f;j++)
    {
        dp[1][j] = j;
    }

    for(int i=2;i<=e;i++)
    {
        for(int j=2;j<=f;j++)
        {
            dp[i][j] = INT_MAX;

            for(int x=1;x<=j;x++)
            {
                dp[i][j] = min(dp[i][j], 1+ max(dp[i-1][x-1], dp[i][j-x]));
            }
        }
    }

    return dp[e][f];
}



int main(){

    

    return 0;
}