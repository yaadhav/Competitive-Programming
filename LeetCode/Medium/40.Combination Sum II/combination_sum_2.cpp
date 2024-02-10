#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    void findCombination( int ind, vector<int> arr, vector<vector<int>>& res, vector<int> candidates, int target)
    {
        if( target==0 )
        {
            res.push_back(arr);
            return;
        }

        for( int i=ind; i<candidates.size(); i++)
        {
            if( i>ind && candidates[i]==candidates[i-1] ) continue;
            if( candidates[i]>target ) break;

            arr.push_back(candidates[i]);
            findCombination( i+1, arr, res, candidates, target-candidates[i]);
            arr.pop_back();
        }

        return;     
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort( candidates.begin(), candidates.end());
        vector<vector<int>> res;
        findCombination( 0, {}, res, candidates, target);

        return res;
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