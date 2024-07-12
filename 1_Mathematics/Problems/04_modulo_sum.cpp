     #include<bits/stdc++.h>
     using namespace std;
     
     long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long x=a+b;
        long long y=(pow(10,9)+7);
        return (a%y+b%y)%y;
    }

    //(a+b)%m = (a%m+b%m)%m;

    
     int main(){
     
        
     
        return 0;
     }
     
     