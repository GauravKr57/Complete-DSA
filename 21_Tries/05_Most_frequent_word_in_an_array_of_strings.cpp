#include<bits/stdc++.h>
using namespace std;

// NAIVE

int mostFrequentWord(string arr[], int n)
{
    int res = 1;
    string ans = "";

    for(int i=0;i<n-1;i++)
    {
        int count = 1;

        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                if(count >= res)
                {
                    res = count;
                    ans = arr[i];
                }
            }
        }
    }
    return s;
}


// EFFICIENT: UNORDERED_MAP (Hashing)

int mostOccuring(string arr[], int n)
{
    unordered_map<string,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    int res = INT_MIN;
    string ans = "";

    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]] >= res)
        {
            res = mp[arr[i]];
            ans = arr[i];
            mp[arr[i]] = 0;
        }
    }

    return ans;
}

int main(){

    

    return 0;
}