//NAIVE

double getMed(int a1[],int a2[], int n1, int n2){

    int arr[n1+n2];
    for(int i=0;i<n1;i++){
        arr[i]=a1[i];
    }
    for(int i=n1;i<n1+n2;i++){
        arr[i]=a2[i-n1];
    }

    sort(arr,arr+(n1+n2));

    if((n1+n2)%2==0){
        return (double) (arr[(n1+n2-1]/2+arr[n1+n2]/2)/2;
    }
    else{
        return arr[n1+n2+1]/2;
    }

}



//EFFICIENT: Binary Search

double median(int a1[], int a2[], int n1, int n2){
    int low1=0,high1=n1;

    while(low1<=high1){
        int i1=low1+(high1-low1)/2;
        int i2= ((n1+n2+1)/2)-i1;

        int min1= (i1==n1)?INT_MAX : a[i1];
        int max1= (i1==0)?INR_MIN : a[i1-1];
        int min2= (i2==n2)?INT_MAX : a[i2];
        int max2= (i2==0)?INT_MIN : a[i2-1];

        if(max1<=min2 && max2<=min1){
            if((n1+n2)%2==0){
                return (double)(max(max1,max2)+min(min1,min2))/2;
            }
            else{
                return (double)(max(max1,max2));
            }
        }
        else if(max1>min2){
            high1= i1-1;
        }
        else{
            low1= i1+1;
        }
    }

}