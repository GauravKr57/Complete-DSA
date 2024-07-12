
//NAIVE

int stock(int arr[],int start, int end){
    int profit=0;
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(arr[j]>=arr[i]){
              int curr_profit=arr[j]-arr[i]+stock(arr,start,i-1)+stock(arr,j+1;end);
              profit=max(profit,curr_profit);
            }
        }
    }
}

//EFFICIENT

int maxProfit(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            profit=profit+arr[i]-arr[i-1];
        }
    }
    return profit;
}

int max(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit=profit+arr[i]-arr[i-1];
        }
    }
    return profit;
}