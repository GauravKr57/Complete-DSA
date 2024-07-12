#include<bits/stdc++.h>
using namespace std;

class minHeap
{   
    int *arr;
    int size, capacity;

    minHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i)
    {
        return 2*i+1;
    }
    int right(int i)
    {
        return 2*i+2;
    }
    int parent(int i)
    {
       return (i-1)/2;
    }

    void insert(int x)
    {
        if(size == capacity) return;

        size++;
        arr[size-1] = x;

        int i = arr[size-1];
        while(i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    void minHeapify(int i)
    {
        int lt = left(i) , rt = right(i);
        int smallest = i;

        if(lt < size && arr[lt] < arr[i]){
            smallest = lt;
        }
        if(rt < size && arr[rt] < arr[smallest]){
            smallest = rt;
        }

        if(smallest != i)
        {
            swap(arr[smallest] , arr[i]);
            minHeapify(smallest);
        }
    }

    int getMin()
    {
        if(size == 0) return -1;

        return arr[0];
    }

    int extractMin()
    {
        if(size == 0){
            return -1;
        }
        if(size == 1){
            size--;
            return arr[0];
        }

        swap(arr[0] , arr[size-1]);
        size--;

        minHeapify(0);

        return arr[size];
    }

    void decreaseKey(int i, int x)
    {
        arr[i] = x;

        while(i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i] , arr[parent(i)]);
            i = parent(i);
        }
    }

    void deleteKey(int i)
    {
        if(size == 0) return;

        decreaseKey(i, INT_MIN);
        extractMin();
    }

    void buildHeap()
    {
        for(int i = (size-2)/2 ; i>=0 ; i--)
        {
            minHeapify(i);
        }
    }

};

int main(){

    

    return 0;
}