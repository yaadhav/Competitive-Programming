#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {

        map<char,int> hash;

        int ans=1, last=0;
        for( int i=0; i<s.length(); i++) {
            if( hash[s[i]]>last ) {
                last=i;
                ans++;
            }
            hash[s[i]]=i+1;
        }
        
        return ans;
    }
};

int main()
{
    string s="anbsdbadsdsascsd";

    Solution sol;
    int ans = sol.partitionString(s);

    cout << ans << endl;
    
    return 0;
}