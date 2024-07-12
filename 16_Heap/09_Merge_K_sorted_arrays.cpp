#include<bits/stdc++.h>
using namespace std;

// An efficient solution is to use a heap data structure. The time complexity of the heap-based solution is O(N Log k).
// 1. Create an output array. 
// 2. Create a min-heap of size k and insert 1st element in all the arrays into the heap 
// 3. Repeat the following steps while the priority queue is not empty. 
// .....a) Remove the minimum element from the heap (minimum is always at the root) and store it in the output array. 
// .....b) Insert the next element from the array from which the element is extracted. If the array doesn’t have any more elements, then do nothing

struct Triplet
{
    int val, aPos, vPos;

    Triplet(int v, int ap, int vp)
    {
        val = v;
        aPos = ap;
        vPos = vp;
    }
};

struct MyCmp
{
    bool operator()(Triplet &t1,, Triplet &t2)
    {
        return t1.val > t2.val;
    }
};


vector<int> mergeArr(vector<vector<int>> &arr)
{
    vector<int> res;

    priority_queue<Triplet, vector<Triplet>, MyCmp> pq;

    for(int i=0; i<arr.size(); i++)
    {
        Triplet t(arr[i][0], i, 0);
        pq.push(t);
    }

    while(!pq.empty())
    {
        Triplet curr = pq.top();
        pq.pop();
        res.push_back(curr.val);

        int ap = curr.aPos;
        int vp = curr.vPos;

        if(vp+1 < arr[ap].size())
        {
            Triplet t(arr[ap][vp+1], ap, vp+1);
            pq.push(t);
        }
    }

    return res;
}


int main(){

    

    return 0;
}