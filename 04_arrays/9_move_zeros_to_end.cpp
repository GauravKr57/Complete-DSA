
//NAIVE

void move(int arr[],int n){

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                swap(arr[i],arr[j]);
            }
        }
    }
}


//EFFICIENT

void moveZeros(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}