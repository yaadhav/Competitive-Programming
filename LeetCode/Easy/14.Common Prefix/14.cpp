#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        string str1=strs[0], str2=strs[strs.size()-1], common="";

        for( int i=0; i<str1.length(); i++)
        {
            if( str1[i]==str2[i] )
                common+=str1[i];
            else
                break;
        }

        return common;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<string> strs;
    string temp; 

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        strs.push_back(temp);
    }

    Solution s;
    string result=s.longestCommonPrefix(strs);
    cout << result;
}