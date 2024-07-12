
//MERGE FUNCTION

void merge(int a[], int low, int mid, int high){

    int n1= mid-low+1, n2= high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]= a[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i]= a[mid+1+i];
    }

    int i=0,j=0;
    int k=low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k++]=left[i];
            i++;
        }
        else{
            a[k++]=right[j];
            j++;
        }
    }
    while(i<n1){
        a[k++]=left[i];
        i++;
    }
    while(j<n2){
        a[k++]=right[j];
        j++;
    }

}