#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c=='-'){
        return 1;
    }
    else {
        return -1;
    }
}

void infixToPostfix(string s)
{
    stack<char> st;
    string res;

    for(auto x:s){
        if(x >= 'a' && x<='z'){
            res += x;
        }
        else if(x == '('){
            st.push('(');
        }
        else if(x == ')'){
            while(st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && precedence(x)<=precedence(st.top())){
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }

    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    cout<<res<<endl;
}

int main(){

    

    return 0;
}