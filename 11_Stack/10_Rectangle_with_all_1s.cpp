#include<bits/stdc++.h>
using namespace std;

// largest rectangular area in histogram code

int largestHist(int arr[], int n)
{
    int res = 0;
    vector<int> ps;
    vector<int> ns;
    stack<int> s;

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

    while(!s.empty()){
        s.pop();
    }

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

        curr += (i-ps[i]-1)*arr[i];
        curr += (ns[i]-i-1)*arr[i];

        res = max(res,curr);
    }

    return res;

}

// Code to calculate largest submatrix with 1s

int largestRectangle1s(int mat[][C])
{
    int res = largestHist(mat[0],C);

    for(int i=1;i<R;i++){
        for(int j=0;j<C;j++){
            if(mat[i][j] == 1){
                mat[i][j] += mat[i-1][j];
            }
        }

        res = max(res,largestHist(mat[i],C));
    }

    return res;
}

int main(){

    

    return 0;
}