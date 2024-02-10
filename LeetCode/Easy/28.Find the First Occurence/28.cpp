#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int res=haystack.find(needle);
        return res;            
    }
};

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;

    Solution sol;
    int result=sol.strStr(haystack, needle);
    cout << result << endl;
}