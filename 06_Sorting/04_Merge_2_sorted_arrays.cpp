//NAIVE

void mergin(int arr[], int brr[],int m, int n){
    int merge[m+n];

    for(int i=0;i<m;i++){
        merge[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        merge[i+m]=brr[i];
    }
    sort(merge,merge+m+n);

    for(int i=0;i<m+n;i++){
        cout<<merge[i]<<" ";
    }
}

//EFFICINT

void merge(int arr[], int brr[], int m, int n){
    
    int i=0,j=0;

    while(i<m && j<n){
        if(arr[i]<=brr[j]){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<brr[j];
            j++;
        }
    }

    while(i<m){
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<brr[j];
        j++;
    }

}