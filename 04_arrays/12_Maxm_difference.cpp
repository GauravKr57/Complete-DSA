
//EFFICIENT

int maxDiff(int arr[],int n){

    int minimum=arr[0];
    int res=arr[1]-arr[0];

    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minimum);
        minimum=min(minimum,arr[j]);
    }
    return res;
}