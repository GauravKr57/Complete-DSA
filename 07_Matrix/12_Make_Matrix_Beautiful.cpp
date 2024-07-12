
int findminOperations(vector<vector<int>> &mat, int n){

    vector<int> val;
    int mxSum=0, res=0;

    for(int i=0;i<n;i++){
        int rowSum=0, colSum=0;

        for(int j=0;j<n;j++){
            rowSum= rowSum+ mat[i][j];
            colSum= colSum+ mat[j][i];
        }
        mxSum= max({mxSum,rowSum,colSum});
        val[i]= rowSum;
    }

    for(int i=0;i<n;i++){
        res= res+mxSum-val[i];
    }

    return res;
}