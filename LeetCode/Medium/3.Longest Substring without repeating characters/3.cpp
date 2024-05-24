#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans=0;
        for( int i=0; i<s.length(); i++) {

            vector<int> freq(62, 0);

            for( int j=i; j<s.length(); j++) {

            if( s[j]>='a' && s[j]<='z' )
                freq[s[j]-'a']++;
            else if( s[j]>='A' && s[j]<='Z' )
                freq[26+(s[j]-'A')]++;
            else
                freq[52+(s[j]-'1')]++;

            int ch=0;
            for( int k: freq) {
                if( k%2==1 ) 
                    ch++;
            }

            if( ch<=1 )
                ans=max( ans, j-i+1);
            }            
        }

        return ans;
    }
};

int main()
{
    string str="acdaeadcfegghhggef";

    Solution s;
    cout << s.lengthOfLongestSubstring(str);

    return 0;
}