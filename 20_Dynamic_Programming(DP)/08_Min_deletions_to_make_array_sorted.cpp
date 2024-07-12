#include<bits/stdc++.h>
using namespace std;

// MINIMUM DELETIONS TO MAKE ARRAY SORTED

int LIS(int arr[], int n)
{
    int lis[n];
    lis[0] = 0;

    for(int i=1;i<n;i++)
    {
        lis[i] = 1;

        for(int j=0;j<i;j++)
        {
            lis[i] = max(lis[i],1+lis[j]);
        }
    }

    return *max_element(lis,lis+n);
}

int delMin(int arr[], int n)
{
    int lis = LIS(arr,n);

    return n-lis;
}

int main(){

    

    return 0;
}