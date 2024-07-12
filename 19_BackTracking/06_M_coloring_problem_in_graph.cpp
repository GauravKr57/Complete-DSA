#include<bits/stdc++.h>
using namespace std;

bool isSafe(int node, bool graph[101][101], int color[], int n, int i)
{
    for(int k=0; k<n; k++)
    {
        if(k != node && graph[node][k] == 1 && color[k] == i)
        {
            return false;
        }
    }

    return true;
}

bool solveRec(int node, bool graph[101][101], int color[], int m, int n)
{
    if(node == n){
        return true;
    }

    for(int i=1; i<=m ;i++)
    {
        if(isSafe(node, graph, color, n, i) == true)
        {
            color[node] = i;
            if(solveRec(node+1, graph, color, m, n) == true){
                return true;
            }
            color[node] = 0;
        }
    }
}

bool isPossible(bool graph[101][101], int m, int n)
{
    int color = {0};

    return solveRec(0, graph, color, m, n);
}

int main(){

    

    return 0;
}