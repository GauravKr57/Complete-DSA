#include<bits/stdc++.h>
using namespace std;

//MINE

int hcf(int a, int b){
    vector<int> vec;
    for(int i=a;i>0;i--){
        if((a%i==0) && (b%i==0)){
            vec.push_back(i);
        }
    }
    return *max_element(vec.begin(),vec.end());
}

//NAIVE

int gcd(int a, int b){
    int res=min(a,b);
    while(res>0){
        if((res%a==0) && (res%b==0)){
            break;
        } 
        res--;
    }
    return res;
}

// EUCLID ALGORITHM WITH BETTER TIME COMPLEXITY
int HCF(int a,int b){
    while(a != b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}


// MOST OPTIMIZED CODE(Recursive)

int GCD(int a,int b){
    if(b==0){
    return a;
    }
    else{
    return (GCD(b,a%b));
    }
}

int main(){

    cout<<hcf(2,4)<<endl;
    cout<<hcf(100,300)<<endl;
    cout<<hcf(3,5)<<endl;
    cout<<hcf(495,18)<<endl;

    cout<<HCF(2,4)<<endl;
    cout<<HCF(100,300)<<endl;
    cout<<HCF(3,5)<<endl;
    cout<<HCF(495,18)<<endl;
    cout<<HCF(2,4)<<endl;

    cout<<GCD(100,300)<<endl;
    cout<<GCD(3,5)<<endl;
    cout<<GCD(495,18)<<endl;

    return 0;
}