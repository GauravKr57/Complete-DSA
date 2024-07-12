#include<bits/stdc++.h>
using namespace std;

class TwoStacks
{
    int *arr;
    int cap, top1, top2;

    public:

    TwoStacks(int n)
    {
        cap = n;
        top1 = -1;
        top2 = n;
        arr = new int[n];
    }

    bool push1(int x)
    {
        if(top1 < top2-1){
            top1++;
            arr[top1] = x;
            return true;
        }
        return false;
    }

    bool push2(int x){
        if(top1 < top2-1){
            top2--;
            arr[top2] = x;
            return true;
        }
        return false;
    }

    int pop1()
    {
        if(top1>=0){
            int x = arr[top1];
            top1--;
            return x;
        }
        cout<<"Stack Underflow";
        exit(1);
    }

    int pop2()
    {
        if(top2<cap){
            int x = arr[top2];
            top2++;
            return x;
        }
        cout<<"Stack Underflow";
        exit(1);
    }

    int size1()
    {
        return (top1+1);
    }

    int size2()
    {
        return (cap-top2);
    }

};

int main(){

    TwoStacks ts(5); 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is "<<ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 

    return 0;
}