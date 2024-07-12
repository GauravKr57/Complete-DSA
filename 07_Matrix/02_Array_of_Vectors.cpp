#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr[], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){

    //CREATING
    int m=3, n=3;
    vector<int> arr[m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i].push_back(i+j);
        }
    }

    print(arr,m);


    return 0;
}