#include<bits/stdc++.h>
using namespace std;

// Follow the steps mentioned below to evaluate postfix expression using stack:

// Create a stack to store operands (or values). 
// Scan the given expression from left to right and do the following for every scanned element. 
// If the element is a number, push it into the stack 
// If the element is an operator, pop operands for the operator from the stack. Evaluate the operator and push the result back to the stack 
// When the expression is ended, the number in the stack is the final answer                                                                                                            

int evaluatePostfix(string S)
    {
        // Your code here
        
        stack<int> st;
        
        for(auto x:S){
            
            
            if(x=='*' || x=='/' || x=='+' || x=='-'){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                
                if(x=='*'){
                    st.push(op2*op1);
                }
                else if(x=='/'){
                    st.push(op2/op1);
                }
                else if(x=='+'){
                    st.push(op2+op1);
                }
                else if(x=='-'){
                    st.push(op2-op1);
                }
            }
            else{
                st.push(x-'0');
            }
            
        }
        
        return st.top();
        
    }

int main(){

    

    return 0;
}