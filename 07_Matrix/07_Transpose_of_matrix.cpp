
//Naive

void Transpose(vector<vector<int>> &mat, int n){

    vector<vector<int>> temp= mat;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]= temp[j][i];
        }
    }
}

//EFFICIENT

void transpose(vectoor<vector<int>> &mat, int n){

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }

}


#include<bits/stdc++.h>
using namespace std;

int main(){

    

    return 0;
}