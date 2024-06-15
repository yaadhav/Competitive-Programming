#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minInsertions(string s) {

        int n=s.length();

        if( n==1 ) return 0;

        vector<int> prev(n+1), ds(n+1);

        for( int i=n-1; i>=0; i--) {
            for( int j=1; j<=n; j++) {    
                if( i>j-1 ) continue;

                if( s[i]==s[j-1] )
                    ds[j]=prev[j-1]+(i!=j-1)+1;
                else
                    ds[j]=max( prev[j], ds[j-1]);
            }
            prev=ds;
        }

        return n-ds[n];
    }
};

int main()
{
    string s="aaba";

    Solution sol;
    int ans=sol.minInsertions(s);
    cout << ans;

    return 0;
}