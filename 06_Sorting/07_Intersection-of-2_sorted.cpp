
//NAIVE

void intersection(int a[], int b[], int m, int n){

    for(int i=0;i<m;i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }

}

//EFFICIENT: Two Pointer approach + Merge function of merge sort

void intersections(int a[], int b[], int m, int n){

    int i=0,j=0;

    while(i<m && j<n){

        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        else if (a[i]>b[j]){
            j++;
        }
        else if (a[i]<b[j]){
            i++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }

    }

}