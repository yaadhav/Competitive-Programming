#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans, c;

        int open=1, close=0;
        for( int i=1; i<s.length(); i++) {
            if( s[i]=='(' ) open++;
            else close++;

            if( close==open ) i++, open++;
            else ans+=s[i];
        }

        return ans;
    }
};

int main()
{
    string str="(()())((())()(()))";

    Solution s;
    cout << s.removeOuterParentheses(str);

    return 0;
}