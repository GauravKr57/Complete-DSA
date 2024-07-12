#include<bits/stdc++.h>
using namespace std;

// EFFICIENT

void printCeiling(int arr[], int n)
{
    cout<<-1<<" ";

    set<int> s;
    s.insert(arr[i]);

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