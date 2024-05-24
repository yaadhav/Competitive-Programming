#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {

        int ans=0;

        for( int i=0; i<s.length(); i++) {

            vector<int> freq(26,0);
            for( int j=i; j<s.length(); j++) {
                freq[s[j]-'a']++;

                int maxx=*max_element(freq.begin(), freq.end());
                
                int minn=maxx;
                for( auto f: freq) {
                    if( f>0 && f<minn)
                        minn=f;
                }

                ans+=maxx-minn;
            }
        }

        return ans;
    }
};

int main()
{
    string str="aabcb";

    Solution s;
    int ans = s.beautySum(str);

    cout << ans;
    
    return 0;
}