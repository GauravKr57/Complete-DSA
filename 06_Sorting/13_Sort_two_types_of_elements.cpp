
//EFFICIENT : Hoare's Partition

void arrange(int arr[], int n){

    int i=-1, j=n;

    while(true){

        do
        {
            i++;
        } while (arr[i]<0);

        do{
            j--;
        } while (arr[j]>=0);

        if(i>=j){
            return;
        }
        swap(arr[i],arr[j]);
        
    }

}

// TWO POINTER APPROACH

void segregate(int arr[], int n){
    int i=0, j=n-1;

    while(i<j){
        if(arr[i]>=0)[
            swap(arr[i],arr[j]);
            j--;
        ]
        else{
            i++;
        }
    }
}