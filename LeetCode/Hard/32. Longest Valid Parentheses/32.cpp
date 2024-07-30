#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {

        int n=s.length();
        stack<int> st;
        vector<int> dp(n+1);

        int ans=0, len=0;
        for( int i=0; i<n; i++) {
            if( s[i]=='(' )
                st.push(i);
            else {
                if(!st.empty()) {
                    dp[i+1] = dp[st.top()]+i-st.top()+1 ;
                    st.pop();
                }
            }
            ans=max( dp[i+1], ans);
        }

        for( auto i: dp) 
            cout << i << " ";
        cout << endl;

        return ans;
    }
};

int main()
{
    string s="()() ) ((()()))() )";

    Solution sol;
    int ans=sol.longestValidParentheses(s);

    cout << ans << endl;

    return 0;
}