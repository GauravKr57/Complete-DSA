
void freq(int arr[],int n){

    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            count++;
        }
        else{
            cout<<"Frequency of "<<arr[i-1]<<" is "<<count;
            count=1;
        }
    }
    if(n==1 || arr[n-2]!=arr[n-1]){
        cout<<"Frequency of "<<arr[n-1]<<" is "<<1;
    }
}