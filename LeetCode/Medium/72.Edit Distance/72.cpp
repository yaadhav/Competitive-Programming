#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string s1, string s2) {

        int n=s1.length(), m=s2.length();

        vector<int> prev(m+1), ds(m+1);

        ds[0]=0;
        for( int j=0; j<=m; j++) 
            prev[0]=j;

        for( int i=1; i<=n; i++) {
            ds[0]=i;
            for( int j=1; j<=m; j++) {
                if( s1[i-1]==s2[j-1] )
                    ds[j]=prev[j-1];
                else {
                    ds[j]=min( prev[j]+1, ds[j-1]+1);
                    ds[j]=min( ds[j], prev[j-1]+1);
                }
            }
            prev=ds;
        }

        return prev[m];
    }
};

int main()
{
    string s1="inten";
    string s2="execu";

    Solution sol;
    int ans=sol.minDistance(s1, s2);

    cout << ans << endl;

    return 0;
}