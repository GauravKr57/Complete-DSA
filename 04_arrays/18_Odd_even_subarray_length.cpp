

int maxLength(int arr[],int n){

    int res=0;
    int count=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2)!=(arr[i-1]%2)){
            count++;
            res=max(res,count);
        }
        else{      
            count=1;
        }
    }
    if(res==1){  //As odd and even should always appear in pair
        return 0;
    }
    return res;
    
}