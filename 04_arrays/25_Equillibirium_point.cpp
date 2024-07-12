
//NAIVE

bool finde(int arr[],int n){
    for(int i=0;i<n;i++){
        int ls=0;
        int rs=0;
        for(int j=0;j<i;j++){
            ls+=arr[j];
        }
        for(int k=i+1;k<n;k++){
            rs+=arr[k];
        }
        if(ls==rs){
            return true;
        }
    }
    return false;
}

//BETTER

bool ePoint(int arr[],int n){
    int ls[n];
    int rs[n];

    int ls[0]=arr[0];
    for(int i=1;i<n;i++){
        ls[i]=ls[i-1]+arr[i];
    }

    int rs[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rs[i]=rs[i+1]+arr[i];
    }

    for(int i=1;i<n-1;i++){
        if(ls[i-1]==rs[i+1]){
            return true;
        }
    }
    return false;
}

//BEST : MOST OPTIMIZED as no need of extra space

bool checke(int arr[],int n){

    int rs=0;
    for(int i=0;i<n;i++){
        rs+=arr[i];
    }

    int ls=0;
    for(int i=0;i<n;i++){
        rs=rs-arr[i];
        if(ls==rs){
            return true;
        }
        ls=ls+arr[i];
    }
    return false;
}