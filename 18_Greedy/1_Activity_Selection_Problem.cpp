#include<bits/stdc++.h>
using namespace std;

// The greedy choice is to always pick the next activity whose finish time is least among the remaining activities and the start time is more than or equal to the finish time of the previously selected activity. We can sort the activities according to their finishing time so that we always consider the next activity as minimum finishing time activity.
// 1) Sort the activities according to their finishing time 
// 2) Select the first activity from the sorted array and print it. 
// 3) Do the following for the remaining activities in the sorted array. 
// .......a) If the start time of this activity is greater than or equal to the finish time of the previously selected activity then select this activity and print it.

bool myCmp(pair<int,int> a, pair<int,int> b)
{
    return (a.second < b.second);
}



int maxmActivities(pair<int,int> arr[], int n)
{
    sort(arr, arr+n, myCmp);

    int prev = 0;
    int res = 1;

    for(int curr=1 ; curr<n ; curr++)
    {
        if(arr[curr].first >= arr[prev].second)
        {
            res++;
            prev = curr;
        }
    }

    return res;
}

int main(){

    

    return 0;
}