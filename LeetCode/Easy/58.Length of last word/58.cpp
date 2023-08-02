#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        string word="";
        int res;
        for( int i=0; i<s.length(); i++)
        {
            if( s[i]==' ' )
            {
                if( word.length()>0 )
                    res=word.length();
                word="";
            }
            else
                word+=s[i];
        }
        if( word.length()>0 )
            res=word.length();

        return res;
    }
};

int main()
{
    string s;
    getline(cin,s);

    Solution sol;
    int result=sol.lengthOfLastWord(s);
    cout << result << endl;
}