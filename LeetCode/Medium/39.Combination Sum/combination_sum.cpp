#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> Solve( int i, vector<int> arr, int sum, vector<vector<int>>& ans, vector<int>& candidates)
    {
        if( i==candidates.size() || sum<=0 )
        {
            if( sum==0 )
                ans.push_back(arr);
            return ans;
        }

        //Solve( i+1, arr, sum, ans, candidates);
        arr.push_back(candidates[i]);
        sum-=candidates[i];
        Solve( i, arr, sum, ans, candidates);
        arr.pop_back();
        arr.push_back(candidates[i+1]);
        sum-=(candidates[i+1]-candidates[i]);
        Solve( i+1, arr, sum, ans, candidates);

        return ans;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> arr;

        ans = Solve( 0, arr, target, ans, candidates);
        return ans;
    }
};

int main()
{
    vector<int> candidates={ 7, 2, 3, 11};
    int target=18;

    Solution s;
    vector<vector<int>> res = s.combinationSum( candidates, target);

    for( auto i: res)
    {
        for( int j: i)
            cout << j << " ";
        cout << endl;
    }
    
    return 0;
}