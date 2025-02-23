
void merge(int arr[],int low, int mid,int high){

    int n1= mid-low+1, n2=high-mid;
    int left[n1], right[n2];

    for(int i=0;i<n1;i++){
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+1+i];
    }

    int i=0,j=0, k=low;

    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k++]=left[i];
            i++;
        }
        else{
            arr[k++]=right[j];
            j++;
        }
    }
    while(i<n1){
        arr[k++]=left[i];
        i++;
    }
    while(j<n2){
        arr[k++]=right[i];
    }

}

//MERGE SORT ALGORITHM

void mergeSort(int arr[], int l, int r){

    if(r>l){
        int mid= l+(r-l)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }

}