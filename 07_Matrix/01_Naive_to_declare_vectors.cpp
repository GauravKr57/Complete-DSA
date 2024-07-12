
#include<bits/stdc++.h>
using namespace std;

int main(){

    //Creating
    int m=3,n=2;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]= i+j;
        }
    }

    //Printing
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}