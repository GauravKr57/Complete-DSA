

int secondLargest(int arr[],int n){

    int res=-1,largest=0;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            res=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest){
            if(arr[i]>res){
                res=arr[i];
            }
            else if(res=-1){
                res=arr[i];
            }

        }

    }
return res;

}