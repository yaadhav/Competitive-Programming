#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> freq(95, -1);

        int curr=0, ans=0, check=-1;
        for( int i=0; i<s.length(); i++)
        {
            if( freq[int(s[i])-32]<=check )
            {
                freq[int(s[i])-32]=i;
                curr++;
            }
            else
            {
                curr = i-freq[int(s[i])-32];
                check=freq[int(s[i])-32];
                freq[int(s[i]-32)]=i;
            }
            
            ans=max( curr, ans);
        }


        return ans;
    }
};

int main()
{
    string str=" ";

    Solution s;
    cout << s.lengthOfLongestSubstring(str);

    return 0;
}