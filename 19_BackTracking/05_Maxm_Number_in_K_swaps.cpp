#include<bits/stdc++.h>
using namespace std;

void maxVal(string str, int k, string &ans)
{
    ans = max(str,ans);

    if(k==0) return;

    for(int i=0;i<str.size()-1;i++)
    {
        for(int j=i+1;j<str.size();j++)
        {
            if(str[j] > str[i])
            {
                swap(str[i],str[j]);
                maxVal(str,k-1,ans);
                swap(str[i],str[j]);
            }
        }
    }
}

string maxInKswaps(string str, int k)
{
    string ans;

    maxVal(str,k,ans);

    return ans;
}

int main(){

    

    return 0;
}