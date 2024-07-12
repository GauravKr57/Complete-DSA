#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n){

    unordered_set<int> s(arr,arr+n);

    return s.size();

}

// VVARIATION OF QUESTION

void NonRepeating(int arr[], int n){

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(mp[arr[i]] == 1){
            cout<<arr[i]<<" ";
        }
    }
}


int main(){

    

    return 0;
}