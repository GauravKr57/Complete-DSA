#include<bits/stdc++.h>
using namespace std;

// Making it clear, when the input size is odd, we take the middle element of sorted data. If the input size is even, we pick the average of the middle two elements in the sorted stream.
// Note that output is the effective median of integers read from the stream so far. Such an algorithm is called an online algorithm. Any algorithm that can guarantee the output of i-elements after processing i-th element, is said to be online algorithm.

void printMedian(int arr[], int n)
{
    priority_queue<int> s; // MAXHEAP
    priority_queue<int, vector<int>, greater<int>> g; // MINHEAP

    s.push(arr[0]);
    cout<<arr[0]<<endl;

    for(int i=1; i<n; i++)
    {
        int x = arr[i];

        if(s.size() > g.size())  // To handle even entry
        {
            if(s.top() > x)
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else{
                g.push(x);
            }

            cout<< (double)(s.top()+g.top())/2.0<<endl;
        }

        else            // To handle ODD entry
        {
            if(x <= s.top())
            {
                s.push(x);
            }
            else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }

            cout<< s.top()<<endl;
        }

    }

}

int main(){

    

    return 0;
}