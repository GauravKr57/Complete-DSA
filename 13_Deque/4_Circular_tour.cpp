#include<bits/stdc++.h>
using namespace std;

// NAIVE

int firstTour(int dist[], int petrol, int n)
{
    for(int start=0;start<n;start++)
    {
        int end = start;
        int curr_petrol = 0;

        while(true){

            curr_petrol += (petrol[end]-dist[end]);
            if(curr_petrol<0){
                break;
            }

            end = (end+1)%n;

            if(end==start){
                return start+1;
            }
        }
    }

    return -1;
}


// EFFICIENT: See copy

int firstTour(int petrol[], int distance[], int n)
{
    int start = 0, currPetrol = 0;
    int prevPetrol = 0;

    for(int i=0;i<n;i++)
    {
        currPetrol += (petrol[i]-distance[i]);

        if(currPetrol<0){
            start = i+1;
            prevPetrol = prevPetrol+currPetrol;
            currPetrol = 0;
        }
    }

    if(prevPetrol + currPetrol >= 0){
        return start+1;
    }

    return -1;
}

int main(){

    

    return 0;
}