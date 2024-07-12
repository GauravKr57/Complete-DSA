#include<bits/stdc++.h>
using namespace std;

// utility function

bool matching(char a, char b){

    return ( (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));

}

// balanced parenthesis code
// The idea is to put all the opening brackets in the stack. Whenever you hit a closing bracket, search if the top of the stack is the opening bracket of the same nature. If this holds then pop the stack and continue the iteration, in the end if the stack is empty, it means all brackets are well-formed . Otherwise, they are not balanced.

bool isBalanced(string &str){

    stack<char> s;

    for(char x : str){

        if(x=='(' || x=='{' || x=='['){
            s.push(x);
        }
        else{
            if(s.empty() == true){
                return false;
            }
            if(matching(s.top(),x) == false){
                return false;
            }
            else{
                s.pop();
            }
        }

    }

    return (s.empty() == true);

}


int main(){

    

    return 0;
}