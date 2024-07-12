#include<bits/stdc++.h>
using namespace std;

void printFreq(int arr[], int n){

    unorderd_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    //Print in any random order
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    //Print in insertion order
    for(int i=0;i<n;i++){
        if(mp[arr[i]] != -1){
            cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
            mp[arr[i]]=-1;  //marked as visited
        }
    }
}

int main(){

    

    return 0;
}