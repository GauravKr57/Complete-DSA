#include<bits/stdc++.h>
using namespace std;

// NAIVE

void leftCeil(int arr[], int n)
{
    cout<<-1<<" ";

    for(int i=1;i<n;i++)
    {
        int diff = INT_MAX;
        for(int j=0;j<i;j++)
        {
            if(arr[j] >= arr[i]){
                diff = min(diff,arr[j]-arr[i]);
            }
        }
        if(diff == INT_MAX){
            cout<<-1<<" ";
        }
        else{
            cout<<(arr[i]+diff);
        }
    }
}

//EFFICIENT

void printCeiling(int arr[], int n)
{
    cout<<-1<<" ";

    set<int> s;
    s.insert(arr[0]);

    for(int i=1;i<n;i++)
    {
        if(s.lower_bound(arr[i]) != s.end()){
            cout<< *(s.lower_bound(arr[i]))<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
}




int main(){

    

    return 0;
}