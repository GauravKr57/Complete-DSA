
void search(vector<vector<int>> &mat){
    int r= mat.size();
    int c= mat[0].size();

    int i=0,j=c-1;

    while(i<r && j>=0){

        if(mat[i][j]==x){
            cout<<"Found at ("<<i<<","<<j;
        }
        else if(mat[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }

    cout<<"Element not found in the Matrix."
}