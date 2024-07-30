#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool recurse( int i, int j, int k, string s1, string s2, string s3) {
        if( k==s3.size() )
            return 1;
        if( i==s1.size() && j==s2.size() )
            return 0;

        bool ans=0;
        if( i<s1.size() && s1[i]==s3[k] )
            ans=recurse( i+1, j, k+1, s1, s2, s3);
        if( j<s2.size() && s2[j]==s3[k] )
            ans=ans||recurse( i, j+1, k+1, s1, s2, s3);

        return ans;
    }

    bool isInterleave(string s1, string s2, string s3) {

        int n1=s1.size(), n2=s2.size(), n3=s3.size();
        if( n1+n2!=n3 )
            return 0;

        return recurse( 0, 0, 0, s1, s2, s3);

        vector<vector<int>> prev( n2+1, vector<int>(n3+1)), cur( n2+1, vector<int>(n3+1));

        for( int i=n1; i>=0; i--) {
            for( int j=n2; j>=0; j--) {
                for( int k=n3-1; k>=0; k--) {
                    cur[j][k]=0;
                    if( i<n1 && s1[i]==s3[k] )
                        cur[j][k]=prev[j][k+1];
                    if( j<n2 && s2[j]==s3[k] )
                        cur[j][k] = cur[j][k] || cur[j+1][k+1];
                }
            }
            prev=cur;
        }

        return prev[0][0];
    }
};

int main()
{
    string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
                                                                      
    Solution sol;
    int ans = sol.isInterleave( s1, s2, s3);
    cout << ans ;

    return 0;
}