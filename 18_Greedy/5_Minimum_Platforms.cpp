#include<bits/stdc++.h>
using namespace std;

int findPlatforms(int arr[], int dep[], int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);

    int platform = 0, int res=0;

    int i = 1 , j = 0;

    while(i<n && j<n)
    {
        if(arr[i] <= dep[j])
        {
            platform++;
            i++;
        }
        else if(arr[i] > dep[j])
        {
            platform--;
            j++;
        }

        res = max(res,platform);
    }

    return res;

}

int main(){

    

    return 0;
}