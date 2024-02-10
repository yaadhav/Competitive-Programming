#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> freq(26);
        string check="";

        int add=0, ans=0;
        for( int i=0; i<s.length(); i++)
        {
            int ind=int(s[i])-96;
            ind=max(0, ind);
            if( freq[ind]==1 )
            {
                if( add>ans )
                    ans=add;
                add=0;
                fill( freq.begin(), freq.end(), 0);
                i--;
            }
            else
            {
                freq[ind]++;  
                add++;
            }          
        }

        if( add>ans )
            ans=add;

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