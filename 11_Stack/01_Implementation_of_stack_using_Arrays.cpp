#include<bits/stdc++.h>
using namespace std;

// using dynamic sized arrays (vectors)

struct MyStack
{
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }

    int top()
    {
        return v.back();
    }

}

int main(){

    class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " Popped from stack\n";
	
	//print top element of stack after poping
	cout << "Top element is : " << s.peek() << endl;
	
	//print all elements in stack :
	cout <<"Elements present in stack : ";
	while(!s.isEmpty())
	{
		// print top element in stack
		cout << s.peek() <<" ";
		// remove top element in stack
		s.pop();
	}

    return 0;
}