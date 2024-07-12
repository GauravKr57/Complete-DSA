#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &vec){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int m=3,n=4;

    vector<vector<int>> vec;
    for(int i=0;i<m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(i+j);
        }
        vec.push_back(v);
    }

    print(vec);

    return 0;
}