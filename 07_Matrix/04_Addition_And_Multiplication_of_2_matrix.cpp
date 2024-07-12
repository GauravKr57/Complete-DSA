#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum(vector<vector<int>> &A, vector<vector<int>> &B){

    vector<vector<int>> vec;

    //ADDITIONS OF TWO MATRIX IS POSSIBLE IF BOTH MATRIX HAVE SAME NUMBER OF ROWS AND COLUMNS

    //Check if rows are equal
    if(A.size() != B.size()){
        return vec;
    }

    for(int i=0;i<A.size();i++){

        //Check if columns are same
        if(A[i].size() != B[i].size()){
            vec.clear();
            return vec;
        }

        vector<int> v;
        for(int j=0;j<A[i].size();j++){
            v.push_back(A[i][j] + B[i][j]);
        }
        vec.push_back(v);
    }

    return vec;

}

// MULTIPLICATION OF MATRIX A AND B IS POSSIBLE IFF NUMBER OF COLUMNS IN A= NUMBER OF ROWS IN B
//MULTIPLIED MATRIX OF SIZE  ROW1 * COL2

vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        vector<vector<int>> ans;
        int n1=A.size();
        int m1=A[0].size();
        int n2=B.size();
        int m2=B[0].size();
        if(m1!=n2)
        {
            return ans;
        }
        for(int i=0;i<n1;i++)
        {
            vector<int> v;
            for(int j=0;j<m2;j++)
            {
                int sum=0;
                for(int k=0;k<n2;k++)
                {
                    sum+=A[i][k]*B[k][j];
                }
                v.push_back(sum);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
        
    
    }

int main(){

    

    return 0;
}