
//NAIVE

void leaders(int arr[]int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<arr[i];
        }
    }
}

//EFFICIENT
//Note: THe last element of array is always leader so we use it as a key

void Leaders(int arr[],int n){
    int leader=arr[n-1];
    cout<<leader;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>leader){
            arr[i]=leader;
            cout<<arr[i];
        }
    }
}