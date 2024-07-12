#include<bits/stdc++.h>
using namespace std;

// NAIVE

void printMax(int arr[], int n, int k){

for(int i=0;i<n-k+1;i++){
    int mx = arr[i];
    for(int j=i+1;j<i+k;j++){
        mx = max(arr[j],mx);
    }
    cout<<mx<<" ";
}

}


// EFFICIENT: Using deque


// Follow the given steps to solve the problem:

// Create a deque to store K elements.
// Run a loop and insert the first K elements in the deque. Before inserting the element, check if the element at the back of the queue is smaller than the current element, if it is so remove the element from the back of the deque until all elements left in the deque are greater than the current element. Then insert the current element, at the back of the deque.
// Now, run a loop from K to the end of the array.
// Print the front element of the deque.
// Remove the element from the front of the queue if they are out of the current window.
// Insert the next element in the deque. Before inserting the element, check if the element at the back of the queue is smaller than the current element, if it is so remove the element from the back of the deque until all elements left in the deque are greater than the current element. Then insert the current element, at the back of the deque.
// Print the maximum element of the last window.

void printMaxSubarrayOfK(int arr[], int n, int k)
{

   deque<int> dq;

   for(int i=0;i<k;i++){
        while(!dq.empty() && arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        
        dq.push_back(i);
   }

   cout<<arr[dq.front()]<<" ";

   for(int i=k;i<n;i++){

        while(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);

        cout<<arr[dq.front()]<<" ";
   }

}

int main(){

    

    return 0;
}