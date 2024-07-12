
#include<bits/stdc++.h>
using namespace std;

int main(){

    

    return 0;
}

//EFFICIENT

struct interval{
    int start, int end;
}

bool myComp(interval i1, interval i2){
    return (i1.start<i2.start);
}

void mergeInterval(interval arr[], int n){

    sort(arr,arr+n,myComp);  //Comparator function

    int res=0;

    for(int i=1;i<n;i++){

        if(arr[res].end >= arr[i].start){
            arr[res].end= max(arr[res].end, arr[i].end);
            arr[res].start= max(arr[res].start, arr[i].start);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }

    for(int i=0; i<=res;i++){
        cout<<arr[i].start<<" "<<arr[i].end<<endl;
    }
}
