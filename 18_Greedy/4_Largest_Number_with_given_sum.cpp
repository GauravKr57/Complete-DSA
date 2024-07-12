#include<bits/stdc++.h>
using namespace std;

string largestNumber(int n, int sum)
    {
        // Your code here
        
        string ans = "";
        
        if(9*n < sum) return "-1";
        
        for(int i=0;i<n;i++)
        {
            if(sum >= 9)
            {
                ans += "9";
                sum -= 9;
            }
            else
            {
                ans += to_string(sum);
                sum = 0;
            }
        }
        
        return ans;
        
    }

int main(){

    

    return 0;
}