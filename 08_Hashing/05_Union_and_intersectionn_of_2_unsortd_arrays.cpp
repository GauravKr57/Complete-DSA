
//UNION

void unions(int a[],int b[], int m, int n){
    
    unordered_set<int> s(a,a+m);

    for(int i=0;i<n;i++){
        s.insert(b[i]);
    }

    for(auto x:s){
        cout<<x<<endl;
    }
}

//INTERSECTION

void intersection(int a[], int b[], int m, int n){

    unordered_set<int> s(b,b+m);

    for(int i=0;i<n;i++){
        if(s.find(a[i]) != s.end()){
            cout<<a[i]<<" ";
        }
    }

}