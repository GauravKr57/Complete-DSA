// C++ program to evaluate a prefix expression.
#include <bits/stdc++.h>
using namespace std;

int evaluatePrefix(string S)
    {
        // Your code here
        
        stack<int> st;
        
        for(int i=S.size()-1;i>=0;i--){
            char x = S[i];
            
            if(x=='*' || x=='/' || x=='+' || x=='-'){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                
                if(x=='*'){
                    st.push(op1*op2);
                }
                else if(x=='/'){
                    st.push(op1/op2);
                }
                else if(x=='+'){
                    st.push(op1+op2);
                }
                else if(x=='-'){
                    st.push(op1-op2);
                }
            }
            else{
                st.push(x-'0');
            }
            
        }
        
        return st.top();
        
    }

// Driver code
int main()
{
    string exprsn = "+ 9 * 12 6";
    cout << evaluatePrefix(exprsn) << endl;
    return 0;

   
}