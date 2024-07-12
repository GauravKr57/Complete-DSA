
// HOARES PARTITION IS MUCH BETTER THAN LOMUTO PARTITION

int partition(int arr[], int l, int h){
    int pivot=arr[l];
    int i=l-1, j=h+1;

    while(true){

        do{
            i++;
        } while(arr[i]<pivot);

        do{
            j--;
        } while(arr[j]>pivot);

        if(i<=j){
            return j;
        }
        swap(arr[i],arr[j]);

    }
}


void quickSort(int arr[], int l, int r){

    if(l<r){

        int p= partition(arr,l,r);
        quickSort(arr,l,p);
        quickSort(arr,p+1,r);

    }
}
