
int fairDistribution(int arr[], int n, int k){

    if(n<k){
        return -1;
    }

    int res=INT_MAX;

    for(int i=0;i<n-k+1;i++){
        res= min(res, arr[i+k-1]-arr[i]);
    }

    return res;
}