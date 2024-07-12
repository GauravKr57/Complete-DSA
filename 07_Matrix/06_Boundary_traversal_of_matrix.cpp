
vector<int> bTraversal(vector<vector<int>> &mat){

    vector<int> ans;
    int row= mat.size();
    int col= mat[0].size();

    if(row==1){
        for(int i=0;i<col;i++){
            ans.push_back(mat[0][i]);
        }
    }
    else if(col==1){
        for(int i=0;i<row;i++){
            ans.push_back(mat[i][0]);
        }
    }

    else{
        for(int i=0;i<col;i++){
            ans.push_back(mat[0][i]);
        }
        for(int i=1;i<row-1;i++){
            ans.push_back(mat[i][col-1]);
        }
        for(int i=col-1;i>=0;i--){
            ans.push_back(mat[row-1][i]);
        }
        for(int i=row-2;i>0;i--){
            ans.push_back(mat[i][0]);
        }
    }

    return ans;

}

#include<bits/stdc++.h>
using namespace std;

int main(){

    

    return 0;
}