#include<bits/stdc++.h>
using namespace std;

vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>ans;
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            if((i%2)==0)
            {
                for(int j=0;j<col;j++)
                    ans.push_back(matrix[i][j]);
            }
            else
            {
                for(int j=col-1;j>=0;j--)
                    ans.push_back(matrix[i][j]);
            }
        }
        
        return ans;
    }

int main(){

    

    return 0;
}