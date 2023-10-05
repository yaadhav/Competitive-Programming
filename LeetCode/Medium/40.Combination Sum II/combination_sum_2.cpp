#include<bits\stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> solve(int i, int sum, vector<int> arr, vector<vector<int>>& ans, vector<int>& candidates, int target, int &count)
    {
        if( i==candidates.size() )
        {
            if( sum==target )
            {
                ans.push_back(arr);
                count++;
                cout << count << endl;
                return ans;
            }
            return ans;
        }

        solve( i+1, sum, arr, ans, candidates, target, count);
        arr.push_back(candidates[i]);
        solve( i+1, sum+candidates[i], arr, ans, candidates, target, count);
        return ans;
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> arr;
        int count=0;
        ans=solve( 0, 0, arr, ans, candidates, target, count);
        return ans;  
    }
};

int main()
{
    vector<int> candidates={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int target=3;

    Solution s;
    vector<vector<int>> res = s.combinationSum2( candidates, target);

    for( auto i: res)
    {
        for( int j: i)
            cout << j << " ";
        cout << endl;
    }
    
    return 0;
}