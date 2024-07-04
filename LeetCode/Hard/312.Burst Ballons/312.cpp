#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        
        int n=nums.size();
        vector<vector<int>> dp( n, vector<int>(n));

        for( int i=n-1; i>=1; i--) {
            for( int j=i+1; j<n; j++) {
                for( int k=i; k<j; k++) {
                    int coins=nums[i-1]*nums[k]*nums[j];
                    coins+=dp[i][k]+dp[k+1][j];
                    dp[i][j]=max( dp[i][j], coins);
                }
            }
        }

        return dp[1][n-1];
    }
};

int main()
{
    vector<int> nums={ 3, 1, 5, 8};   
    
    Solution sol;
    int ans=sol.maxCoins(nums);
    cout << ans << endl; 

    return 0;
}