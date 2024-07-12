#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

string infixToPrefix(string s)
{
    stack<char> st;
    string res;

    for(int i=s.size();i>=0;i--){
        char x = s[i];

        if(x>='a' && x<='z'){
            res += x;
        }
        else if(x==')'){
            st.push(x);
        }
        else if(x=='('){
            while(st.top() != ')'){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(!s.empty() && precedence(x) <= precedence(st.top())){
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }

    while(!s.empty()){
        res += st.top();
        st.pop();
    }

    reverse(res.begin(),res.end());

    return res;

}

int main(){

    

    return 0;
}