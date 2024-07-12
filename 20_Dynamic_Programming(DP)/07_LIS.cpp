#include<bits/stdc++.h>
using namespace std;


// BETTER : DP  TC: O(N^2)


//Formally, the length of the longest increasing subsequence ending at index i, will be 1 greater than the maximum of lengths of all longest increasing subsequences ending at indices before i, where arr[j] < arr[i] (j < i).


int LIS(int arr[], int n)
{
    int lis[n];

    lis[0] = 1;

    for(int i=1;i<n;i++)
    {   
        lis[i] = 1;

        for(int j=0;j<i;j++)
        {
            if(arr[j] < arr[i])
            {
                lis[i] = max(lis[i], 1+lis[j]);
            }
        }
    }

    int res = lis[0];

    for(int i=1;i<n;i++)
    {
        res = max(res,lis[i]);
    }

    return res;
}


// BEST : Binary Search


// step 1: find ceiling using binary search

int ceilIndex(int tail[], int l, int h, int key)
{
    while(h > l)
    {
        int m = l+(h-l)/2;

        if(tail[m] >= x)
        {
            h = m;
        }
        else
        {
            l = m+1;
        }
    }

    return h;
}


int lis(int arr[], int n)
{
    int tail[n];

    tail[0] = arr[0];
    int len = 1;

    for(int i=1;i<n;i++)
    {
        if(arr[i] > tail[len-1])
        {
            tail[len] = arr[i];
            len++;
        }
        else
        {
            int c = ceilIndex(tail, 0, len-1, arr[i]);

            tail[c] = arr[i];
        }
    }

    return len;
}

int main(){

    

    return 0;
}