
//NAIVE

long long int inversions(long long arr[],long long n){

long long count=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            count++;
        }
    }
}

return count;

}

//EFFICIEENT

int countandMerge(int arr[], int l, int m, int r){
    
    int n1= m-l+1, n2= r-m;
    int left[n1], right[n2];

    for(int i=0;i<n1;i++){
        left[i]= arr[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]= arr[m+1+i];
    }

    int i=0,j=0,k=l;
    int count=0;

    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k++]=left[i];
            i++;
        }
        else{
            arr[k++]=right[j];
            j++;
            count= count+(n1-i);
        }
    }
    while(i<n1){
        arr[k++]=left[i]; i++;
    }
    while(j<n2){
        arr[k++]=right[j]; j++;
    }

    return count;

}


int countInversion(int arr[], int l, int r){
    int res=0;

    if(r>l){
        int mid=l+(r-l)/2;

        res+= countInversion(arr,l,mid);
        res+= countInversion(arr,mid+1,r);
        res+= countandMerge(arr,l,mid,r);
    }

    return res;
}