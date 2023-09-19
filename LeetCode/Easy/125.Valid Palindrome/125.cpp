#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        string check="";
        for( int i=0; i<s.length(); i++ )
        {
            if( int(s[i])>=48 && int(s[i])<=57 )
                check+=s[i]; 
            else if( tolower(s[i])>=97 && tolower(s[i])<=122 )
                check+=char(tolower(s[i]));
        }

        bool ans=1;
        for( int i=0, j=check.length()-1; i<j; i++, j--)
        {
            if( check[i]!=check[j] )
            {
                ans=0;
                break;
            }
        }

        return ans;
    }
};

int main()
{
    string s;
    getline(cin, s);

    Solution sol;
    bool res = sol.isPalindrome(s);

    cout << res << endl;

    return 0;
}