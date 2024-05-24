#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void combinations( int ind, int n, int k, vector<int> ds) {

        if( ds.size()==k ) {
            ans.push_back(ds);
            return;
        }

        for( int i=ind; i<=n; i++) {
            ds.push_back(i);
            combinations( i+1, n, k, ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {

        combinations( 1, n, k, {});
        return ans;
    }
};

int main()
{
    int n=5, k=3;

    Solution s;
    vector<vector<int>> ans=s.combine(n,k);

    for( auto i: ans) {
        for( auto j:i)
            cout << j << " ";
        cout << endl;
    }
    
    return 0;
}