#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long recurse( int ind, vector<vector<int>> ques ) {

        if( ind>=ques.size() )
            return 0;

        int notTake=recurse( ind+1, ques);
        int take=recurse( ind+ques[ind][1]+1, ques)+ques[ind][0];

        return max( take, notTake);
    }

    long long mostPoints(vector<vector<int>>& ques) {
        
        int n=ques.size();

        vector<int> dp(n+1);
        for( int i=n-1; i>=0; i--) {
            if( i+ques[i][1]+1<=n )
                dp[i]=max( dp[i+1], dp[i+ques[i][1]+1]+ques[i][0]);
            else    
                dp[i]=max( dp[i+1], ques[i][0]);
        }

        return dp[0];
    }
};

int main()
{
    vector<vector<int>> ques={ {3,2}, {4,3}, {4,4}, {2,5}};

    Solution s;
    long long ans = s.mostPoints(ques);

    cout << ans << endl;

    return 0;
}