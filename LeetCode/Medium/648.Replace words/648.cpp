#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {

        int n=sentence.length();
        map<string, bool> dict;

        for( string s: dictionary) 
            dict[s]=1;
        

        vector<int> sp={-1};
        for( int i=0; i<n; i++) {
            if( sentence[i]==' ' )
                sp.push_back(i);
        }

        string ans="";

        for( int i=0; i<sp.size(); i++) {
            string word="";
            for( int j=sp[i]+1; sentence[j]!=' ' && j<n; j++) {
                word+=sentence[j];
                if(dict[word]) break;
            }
            ans+=word+" ";
        }
        
        return ans;
    }
};

int main()
{
    vector<string> dictionary={ "cat", "bat", "rat"};
    string sentence="battled cattled rattled";

    Solution s;
    string ans = s.replaceWords( dictionary, sentence);
    cout << ans;

    return 0;
}