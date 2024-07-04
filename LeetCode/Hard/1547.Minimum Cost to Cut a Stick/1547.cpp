#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    int minCost(int n, vector<int>& cuts) {
        sort( cuts.begin(), cuts.end());
        cuts.push_back(0);
        cuts.push_back(n);

        int m=cuts.size();
        for( int i=0; i<m-2; i++) 
            swap( cuts[i], cuts[m-2]);

        vector<vector<int>> dp( m, vector<int>(m, INT_MAX));

        for( int i=m-2; i>=0; i--) {
            dp[i][i+1]=0;
            for( int j=i+2; j<m; j++) {
                for( int k=i+1; k<j; k++) {
                    int cost=cuts[j]-cuts[i]+dp[i][k]+dp[k][j];
                    dp[i][j]=min( dp[i][j], cost);
                }
            }
        }

        return dp[0][m-1];
    }
};

int main()
{
    int n=7;
    vector<int> cuts={ 1, 3, 4, 5};   
    
    Solution sol;
    int ans=sol.minCost( n, cuts);
    cout << ans << endl; 

    return 0;
}