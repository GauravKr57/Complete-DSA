#include<bits/stdc++.h>
using namespace std;

int LHA(int arr[], int n){

    int res = 0;

    for(int i=0;i<n;i++){
        int curr = arr[i];

        for(int j=i-1;j>=0;j--){
            if(arr[j]>=arr[i]){
                curr += arr[i];
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                curr += arr[i];
            }
            else{
                break;
            }
        }
        res = max(res,curr);
    }

    return res;

}


// EFFICIENT : previous and next greter arrays

int largestAreaofHistogram(int arr[], int n)
{
    int res = 0;
    vector<int> ps;
    vector<int> ns;
    stack<int> s;

    // find previous smaller element
    
    s.push(0);
    ps.push_back(-1);

    for(int i=1;i<n;i++){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        int pse = (s.empty()) ? -1:s.top();
        ps.push_back(pse);
        s.push(i);
    }

    // clear stack
    while(s.empty()==false){
        s.pop();
    }

    // find next smaller element

    s.push(n-1);
    ns.push_back(n);

    for(int i=n-2;i>=0;i--){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        int nse = (s.empty()) ? n:s.top();
        ns.push_back(nse);
        s.push(i);
    }

    reverse(ns.begin(),ns.end());

    // formula

    for(int i=0;i<n;i++){
        int curr = arr[i];

        curr += (i-ps[i]-i)*arr[i]; //length*height = area
        curr += (ns[i]-i-1)*arr[i];

        res = max(res,curr);
    }

    return res;

}

int main(){

    

    return 0;
}