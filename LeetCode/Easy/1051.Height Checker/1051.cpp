#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ex=heights;
        sort( ex.begin(), ex.end());

        int ans=0;
        for( int i=0; i<ex.size(); i++)
            ans+=ex[i]!=heights[i];
        
        return ans;
    }
};

int main()
{
    vector<int> heights={1,1,4,2,1,3};

    Solution sol;
    cout << sol.heightChecker(heights);

    return 0;
}