#include<bits/stdc++.h>
using namespace std;

// NAIVE

void printPrevGreater(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
            cout<<-1<<" ";
    }
}



// EFFICIENT

void print_prevGreater(int arr[], int n)
{
    stack<int> s;

    s.push(arr[0]);
    cout<<-1<<" ";

    for(int i=1;i<n;i++){
        while(!s.empty() && s.top()<arr[i]){
            s.pop();
        }
        int pg = (s.empty()) ? -1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }

}

int main(){

    

    return 0;
}