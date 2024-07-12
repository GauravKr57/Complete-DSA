
//NAIVE

void rotate(vector<vector<int>> matrix, int n){

    vector<vector<int>> temp;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j]=matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=temp[i][n-j-1];
        }
    }
}

//EFFICIENT

void rotateby90(vector<vector<int>> mat, int n){

    //FIRST FIND TRANSPOSE OF MATRIX
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }

    //Then REVERSE THE COLUMNS 
    for(int i=0;i<n;i++){
        int low=0,high=n-1;

        while(low<high){
            swap(mat[low][i] , mat[high][i]);
            low++;
            high--;
        }
    }
}