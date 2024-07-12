
int fact(int n) 
{ 
    return (n <= 1) ? 1 : n * fact(n - 1); 
} 

int lexRank(string &s){

    int n= s.length();

    int count[256]={0};

    int temp = fact(n);

    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    for(int i=1;i<256;i++){
        count[i]= count[i]+count[i-1];
    }

    int res=1;

    for(int i=0;i<n-1;i++){

        temp = temp/(n-i);
        res= res+ count[s[i]-1]*temp;

        for(int j=s[i];j<256;j++){
            count[j--];
        }

    }

    return res;

}

// eff

 long long  factorial(long long  n){
       if(n==0||n==1){
           return 1;
       }
       return (n*factorial(n-1))%1000000007 ;
   }
   int findRank(string S) 
   { long long res=1;
    long long  n=S.length();
   int count[256]={0};
   for(int i=0;i<n;i++){
       if(count[S[i]]==1){
           return 0;
       }
       count[S[i]]++;
       
   }
   for(int i=1;i<256;i++)
      {
       count[i]+=count[i-1];   
      }
for(int i=0;i<n-1;i++){

   res=res+(count[S[i]-1]*factorial(n-i-1))%1000000007;
res%=1000000007;
   for(int j=S[i];j<256;j++){
       count[j]--;
   }
}  

return res%1000000007;
   }