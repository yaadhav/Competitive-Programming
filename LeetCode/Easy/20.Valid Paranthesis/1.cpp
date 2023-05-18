#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> p;
        string pair="{}[]()";
        bool result=true;

        for( int i=0; i<s.length() && result; i++)
        {
            if( s[i]=='{' || s[i]=='[' || s[i]=='(' )
                p.push_back(s[i]);
            else
            {
                if( p.size()==0 )
                {   result=false;
                    break;  }

                for( int j=0; j<6; j+=2)
                {
                    if( pair[j]==p[p.size()-1] )
                    {
                        if(pair[j+1]==s[i])
                            p.pop_back();
                        else         
                            result=false;
                        break;
                    }
                }
            }
        }   

        if(p.size()!=0)
            result=false;     

        return result;
    }
};

int main()
{
    string s;
    cin >> s;

    Solution sol;
    bool result=sol.isValid(s);
    cout << result;
}