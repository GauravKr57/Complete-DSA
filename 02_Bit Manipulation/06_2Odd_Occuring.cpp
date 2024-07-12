#include<bits/stdc++.h>
using namespace std;

void oddOccuring(int arr[], int n){
    int x=arr[0];
    for(int i=1;i<n;i++){
        x=x^arr[i];
    }
    int k= (x & (~(x-1)));
    int res1=0, res2=0;
    for(int i=0;i<n;i++){
        if(arr[i] & k!=0){
            res1=res1 ^ arr[i];
        }
        else{
            res2=res2 ^ arr[i];
        }
    }
    cout<<res1<<" "<<res2;
}

int main(){

    int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
	
    oddOccuring(arr, n);

    return 0;
}