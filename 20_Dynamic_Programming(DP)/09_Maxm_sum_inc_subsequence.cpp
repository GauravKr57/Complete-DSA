#include<bits/stdc++.h>
using namespace std;

// DP : SAME CONCEPT AS LIS

int MSIS(int arr[], int n)
{
    int msis[n];

    msis[0] = arr[0];

    for(int i=1;i<n;i++)
    {
        msis[i] = arr[i];

        for(int j=0;j<i;j++)
        [
            msis[i] = max(msis[i], arr[i]+msis[j]);
        ]
    }

    return *max_element(msis, msis+n);
}

int main(){

    

    return 0;
}