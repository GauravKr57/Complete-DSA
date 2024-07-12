#include<iostream>
using namespace std;

bool check_palindrome(int n){
    int x=n;
    int rev=0;
    while(x){
        int y= x%10;
        rev=rev*10+y;
        x/=10;
    }
    
    return (rev==n);
}

int main(){

   cout<< check_palindrome(787)<<endl;
   cout<< check_palindrome(2)<<endl;
   cout<< check_palindrome(453);

    return 0;
}