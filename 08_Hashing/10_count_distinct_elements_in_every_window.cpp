#include<bits/stdc++.h>
using namespace std;

int main(){

    

    return 0;
}


// EFFICIENT

void printDistinct(int arr[], int n, int k){

    map<int,int> m;

    for(int i=0;i<k;i++){
        m[arr[i]]++;
    }
    cout<<m.size()<<" ";

    for(int i=k;i<n;i++){

        m[arr[i-k]]--;
        if(m[arr[i-k]] == 0){
            m.erase(arr[i-k]);
        }

        m[arr[i]]++;

        cout<<m.size()<<" ";

    }

}