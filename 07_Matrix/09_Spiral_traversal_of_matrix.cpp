
void printSpiral(vector<vector<int>> &mat, int r, int c){

    int top=0, left=0, bottom= r-1, right= c-1;

    while(top<=bottom && left<=right){

        for(int i=left;i<=right;i++){
            cout<< mat[top][i]<<" ";         //TOP ROW
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<< mat[i][right]<<" ";       //RIGHT COLUMN
        }
        right--;
        
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<< mat[bottom][i]<<" ";    //BOTTOM ROW
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<< mat[i][left]<<" ";           //LEFT COLUMN
            }
            left++;
        }
    }
}