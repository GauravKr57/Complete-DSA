#include<bits/stdc++.h>
using namespace std;

void combinations(int idx, int target, vector<int> &a, vector<vector<int>> &ans, vector<int> &v)
{
    if(idx == n)
    {
        if(target == 0)
        {
            ans.push_back(v);
        }
        return;
    }

    // Pick ans item

    if(a[idx] <= target)
    {
        v.push_back(a[idx]);
        combinations(idx, target-a[idx], a, ans, v);
        v.pop_back();
    }

    combinations(idx+1, target, a, ans, v);
}


vector<vector<int>> findCombinations(vector<int> arr, int target)
{

    vector<vector<int>> ans;
    vector<int> v;

    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());

    combinations(0, target, arr, ans, v);

    return ans;

}

int main(){

    

    return 0;
}