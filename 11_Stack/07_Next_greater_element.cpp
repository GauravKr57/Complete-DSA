#include<bits/stdc++.h>
using namespace std;

//  NAIVE

void printNGE(int arr[], int n)
{
    int next, i, j;
    for (i = 0; i < n; i++) {
        next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " --> " << next << endl;
    }
}


// EFFICIENT

vector<int> next_greater_element(int arr[],int n)
{
    stack<int> s;
    vector<int> v;
    
    s.push(arr[n-1]);
    v.push_back(-1);

    for(int i=n-2;i>=0;i--){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }

        int ng = (s.empty()) ? -1:s.top();
        v.push_back(ng);
        s.push(arr[i]);
    }

    reverse(v.begin(),v.end());

    return v;

}

int main(){

    

    return 0;
}