
int max1(int arr[],int n){
    int count=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            res=max(res,count);
        }
        else{
            count=0;
        }
    }
    return res;
}

//MOST EFFICIENT

int maxOnes(int arr[],int n){
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr=0;
        }
        else{
            curr++;
            res=max{res,curr};
        }
    }
    return res;
}