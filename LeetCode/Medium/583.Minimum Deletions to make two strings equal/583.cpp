#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string s1, string s2) {

        int n=s1.length(), m=s2.length();

        vector<int> prev(m+1), ds(m+1);

        for( int i=1; i<=n; i++) {
            for( int j=1; j<=m; j++) {
                if( s1[i-1]==s2[j-1] )
                    ds[j]=prev[j-1]+1;
                else
                    ds[j]=max( prev[j], ds[j-1]);
            }
            prev=ds;
        }

        return n+m-2*ds[m];
    }
};

int main()
{
    string s1="aaba";
    string s2="akjsbadf";

    Solution sol;
    int ans=sol.minDistance(s1, s2);
    cout << ans;

    return 0;
}