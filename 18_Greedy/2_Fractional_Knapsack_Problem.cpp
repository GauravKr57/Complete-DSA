#include<bits/stdc++.h>
using namespace std;

// An efficient solution is to use the Greedy approach. The basic idea of the greedy approach is to calculate the ratio value/weight for each item and sort the item on the basis of this ratio. Then take the item with the highest ratio and add them until we can’t add the next item as a whole and at the end add the next item as much as we can. Which will always be the optimal solution to this problem.



// To sort in value/weight ratio in decreasing order, we write our own comparator function

bool myCmp(pair<int,int> a, pair<int,int> b)
{
    double r1 = (double)a.first/a.second ;
    double r2 = (double)b.first/b.second ;

    return r2 > r1 ; 
}

double fractionalKnapsack(int W , pair<int,int> arr[] , int n)
{
    sort(arr,arr+n, myCmp);

    int res = 0.0;

    for(int i=0;i<n;i++)
    {
        if(arr[i].second <= W)
        {
            res += arr[i].first;
            W -= arr[i].second;
        }
        else
        {
            res += arr[i].first * (double)W/arr[i].second ;
            break;
        }
    }

    return res;

}

int main(){

    

    return 0;
}