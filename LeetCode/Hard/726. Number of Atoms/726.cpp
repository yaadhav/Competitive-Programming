#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNum( char c ) {
        return c>='0' && c<='9';
    }

    bool isLower( char c ) {
        return c>='a' && c<='z';
    }

    string countOfAtoms(string s) {

        int n=s.length();
        stack<string> st;
        map<string,int> count;

        st.push("");

        for( int i=0; i<=n; i++) {
            if( i<n && s[i]=='(' )
                st.push("");
            else if( i<n && s[i]!=')' ) 
                st.top()+=s[i];
            else {
                int mult=0;
                while( i+1<n && isNum(s[i+1]) ) {
                    mult=(mult*10)+(s[i+1]-'0');
                    i++;
                }

                if(!mult) mult=1;

                string cur=st.top();
                st.pop();
                int m=cur.length();
                for( int j=0; j<m; j++) {
                    string element="";
                    element+=cur[j++];
                    while( j<m && isLower(cur[j])) {
                        element+=cur[j];
                        j++;
                    }

                    int add=0;
                    while( j<m && isNum(cur[j]) ) {
                        add=(add*10)+(cur[j]-'0');
                        j++;
                    }
                    j--;
                    if( !add ) add=1;

                    if(i<n) st.top()+=element+to_string(add*mult);
                    else count[element]+=add;
                }
            }
        }

        vector<pair<string,int>> ord;

        for( auto pr: count) 
            ord.push_back(pr);

        sort( ord.begin(), ord.end());

        string ans="";
        for( int i=0; i<ord.size(); i++) {
            ans+=ord[i].first;
            if(ord[i].second>1) ans+=to_string(ord[i].second);
        }

        return ans;
    }
};

int main()
{
    string s="H2O2";

    Solution sol;
    string ans=sol.countOfAtoms(s);
    cout << ans;

    return 0;
}