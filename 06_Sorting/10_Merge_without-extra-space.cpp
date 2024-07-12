
// a and b are sorted arrays

void merge(int a[], int b[], int m, int n){

    int i=m-1, j=0;

    while(i>=0 && j<n){
        if(a[i] >= b[j]){
            swap(a[i],b[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }

    sort(a, a+m);
    sort(b, b+n);
}